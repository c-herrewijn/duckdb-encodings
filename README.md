# DuckDB - Encodings

This extension allows you to register all encodings available in the [ICU data repository](https://github.com/unicode-org/icu-data/tree/main/charset/data/ucm). It supports a total of 1,040 different encodings. The names of the encodings match the `<code_set_name>` option in each file. 
It currently only performs encoding when reading data, converting from `<code_set_name>` to `UTF-8`.

## Usage
To use this extension, you must first install and load it in DuckDB.

```sql
INSTALL encodings;
LOAD encodings;
```

After that, all encodings are initialized in your database instance. To use them, simply refer to the correct encoding.

```sql
FROM read_csv('my_shift_jis.csv', encoding = 'shift_jis')
```

## Building
### Generating Encoding Maps
Most of the code in this library consists of auto-generated maps from the Unicode data. The Unicode data is inlined in the `third_party` folder, and the generated code resides in `src/include/generated`. Any changes to files in this folder should be made by modifying the `scripts/converter.py` script, rather than editing the files manually.
If it's necessary to regenerate the code (e.g., due to a bug fix in the replacement maps), simply run:
```bash
python scripts/converter.py
```

Note that the script does not generate formatted code, so you must also run:
```bash
make format
```

It is also important to notice that the `scripts/converter.py` script also generates the `test/sql/encodings.test` test file.

### Build steps
Now to build the extension, run:
```sh
make
```
The main binaries that will be built are:
```sh
./build/release/duckdb
./build/release/test/unittest
./build/release/extension/encodings/encodings.duckdb_extension
```
- `duckdb` is the binary for the duckdb shell with the extension code automatically loaded.
- `unittest` is the test runner of duckdb. Again, the extension is already linked into the binary.
- `encodings.duckdb_extension` is the loadable binary as it would be distributed.

## Running the tests
Different tests can be created for DuckDB extensions. The primary way of testing DuckDB extensions should be the SQL tests in `./test/sql`. These SQL tests can be run using:
```sh
make test
```

### Installing the deployed binaries
To install your extension binaries from S3, you will need to do two things. Firstly, DuckDB should be launched with the
`allow_unsigned_extensions` option set to true. How to set this will depend on the client you're using. Some examples:

CLI:
```shell
duckdb -unsigned
```

Python:
```python
con = duckdb.connect(':memory:', config={'allow_unsigned_extensions' : 'true'})
```

NodeJS:
```js
db = new duckdb.Database(':memory:', {"allow_unsigned_extensions": "true"});
```

Secondly, you will need to set the repository endpoint in DuckDB to the HTTP url of your bucket + version of the extension
you want to install. To do this run the following SQL query in DuckDB:
```sql
SET custom_extension_repository='bucket.s3.eu-west-1.amazonaws.com/<your_extension_name>/latest';
```
Note that the `/latest` path will allow you to install the latest extension version available for your current version of
DuckDB. To specify a specific version, you can pass the version instead.

After running these steps, you can install and load your extension using the regular INSTALL/LOAD commands in DuckDB:
```sql
INSTALL encodings
LOAD encodings
```
