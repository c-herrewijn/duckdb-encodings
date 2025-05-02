#include "generated/inis_8_map.hpp"

namespace duckdb {
namespace duckdb_encodings {

// Generated from: glibc-INIS_8-2.1.2.ucm
static const map_entry_encoding INIS_8_to_utf8[] = {
    {1, "\x00", 1, "\x00"},         {1, "\x01", 1, "\x01"},         {1, "\x02", 1, "\x02"},
    {1, "\x03", 1, "\x03"},         {1, "\x04", 1, "\x04"},         {1, "\x05", 1, "\x05"},
    {1, "\x06", 1, "\x06"},         {1, "\x07", 1, "\x07"},         {1, "\x08", 1, "\x08"},
    {1, "\x09", 1, "\x09"},         {1, "\x0A", 1, "\x0A"},         {1, "\x0B", 1, "\x0B"},
    {1, "\x0C", 1, "\x0C"},         {1, "\x0D", 1, "\x0D"},         {1, "\x0E", 1, "\x0E"},
    {1, "\x0F", 1, "\x0F"},         {1, "\x10", 1, "\x10"},         {1, "\x11", 1, "\x11"},
    {1, "\x12", 1, "\x12"},         {1, "\x13", 1, "\x13"},         {1, "\x14", 1, "\x14"},
    {1, "\x15", 1, "\x15"},         {1, "\x16", 1, "\x16"},         {1, "\x17", 1, "\x17"},
    {1, "\x18", 1, "\x18"},         {1, "\x19", 1, "\x19"},         {1, "\x1A", 1, "\x1A"},
    {1, "\x1B", 1, "\x1B"},         {1, "\x1C", 1, "\x1C"},         {1, "\x1D", 1, "\x1D"},
    {1, "\x1E", 1, "\x1E"},         {1, "\x1F", 1, "\x1F"},         {1, "\x20", 1, "\x20"},
    {1, "\x3A", 2, "\xCE\xB1"},     {1, "\x3B", 2, "\xCE\xB2"},     {1, "\x3C", 2, "\xCE\xB3"},
    {1, "\x3D", 2, "\xCE\xB4"},     {1, "\x3E", 2, "\xCE\x9E"},     {1, "\x5E", 3, "\xE2\x86\x92"},
    {1, "\x5F", 3, "\xE2\x88\xAB"}, {1, "\x60", 3, "\xE2\x81\xB0"}, {1, "\x61", 2, "\xC2\xB9"},
    {1, "\x62", 2, "\xC2\xB2"},     {1, "\x63", 2, "\xC2\xB3"},     {1, "\x64", 3, "\xE2\x81\xB4"},
    {1, "\x65", 3, "\xE2\x81\xB5"}, {1, "\x66", 3, "\xE2\x81\xB6"}, {1, "\x67", 3, "\xE2\x81\xB7"},
    {1, "\x68", 3, "\xE2\x81\xB8"}, {1, "\x69", 3, "\xE2\x81\xB9"}, {1, "\x6A", 3, "\xE2\x81\xBA"},
    {1, "\x6B", 3, "\xE2\x81\xBB"}, {1, "\x6C", 3, "\xE3\x83\xAB"}, {1, "\x6D", 2, "\xCE\x94"},
    {1, "\x6E", 2, "\xCE\x9B"},     {1, "\x6F", 2, "\xCE\xA9"},     {1, "\x70", 3, "\xE2\x82\x80"},
    {1, "\x71", 3, "\xE2\x82\x81"}, {1, "\x72", 3, "\xE2\x82\x82"}, {1, "\x73", 3, "\xE2\x82\x83"},
    {1, "\x74", 3, "\xE2\x82\x84"}, {1, "\x75", 3, "\xE2\x82\x85"}, {1, "\x76", 3, "\xE2\x82\x86"},
    {1, "\x77", 3, "\xE2\x82\x87"}, {1, "\x78", 3, "\xE2\x82\x88"}, {1, "\x79", 3, "\xE2\x82\x89"},
    {1, "\x7A", 2, "\xCE\xA3"},     {1, "\x7B", 2, "\xCE\xBC"},     {1, "\x7C", 2, "\xCE\xBD"},
    {1, "\x7D", 2, "\xCF\x89"},     {1, "\x7E", 2, "\xCF\x80"},     {1, "\x7F", 1, "\x7F"},
};
void Inis_8ToUtf::Register(const DBConfig &config) {
	const Inis_8ToUtf generated_function;
	const EncodingFunction function(generated_function.name, GeneratedEncodedFunction::Decode,
	                                generated_function.max_bytes_per_byte, generated_function.lookup_bytes,
	                                INIS_8_to_utf8, generated_function.size);
	config.RegisterEncodeFunction(function);
}
} // namespace duckdb_encodings
} // namespace duckdb
