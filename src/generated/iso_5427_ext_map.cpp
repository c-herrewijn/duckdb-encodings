#include "generated/iso_5427_ext_map.hpp"

namespace duckdb {
namespace duckdb_encodings {

// Generated from: glibc-ISO_5427_EXT-2.1.2.ucm
static const map_entry_encoding ISO_5427_EXT_to_utf8[] = {
    {1, "\x00", 1, "\x00"},     {1, "\x01", 1, "\x01"},     {1, "\x02", 1, "\x02"},     {1, "\x03", 1, "\x03"},
    {1, "\x04", 1, "\x04"},     {1, "\x05", 1, "\x05"},     {1, "\x06", 1, "\x06"},     {1, "\x07", 1, "\x07"},
    {1, "\x08", 1, "\x08"},     {1, "\x09", 1, "\x09"},     {1, "\x0A", 1, "\x0A"},     {1, "\x0B", 1, "\x0B"},
    {1, "\x0C", 1, "\x0C"},     {1, "\x0D", 1, "\x0D"},     {1, "\x0E", 1, "\x0E"},     {1, "\x0F", 1, "\x0F"},
    {1, "\x10", 1, "\x10"},     {1, "\x11", 1, "\x11"},     {1, "\x12", 1, "\x12"},     {1, "\x13", 1, "\x13"},
    {1, "\x14", 1, "\x14"},     {1, "\x15", 1, "\x15"},     {1, "\x16", 1, "\x16"},     {1, "\x17", 1, "\x17"},
    {1, "\x18", 1, "\x18"},     {1, "\x19", 1, "\x19"},     {1, "\x1A", 1, "\x1A"},     {1, "\x1B", 1, "\x1B"},
    {1, "\x1C", 1, "\x1C"},     {1, "\x1D", 1, "\x1D"},     {1, "\x1E", 1, "\x1E"},     {1, "\x1F", 1, "\x1F"},
    {1, "\x20", 1, "\x20"},     {1, "\x40", 2, "\xD2\x91"}, {1, "\x41", 2, "\xD1\x92"}, {1, "\x42", 2, "\xD1\x93"},
    {1, "\x43", 2, "\xD1\x94"}, {1, "\x44", 2, "\xD1\x91"}, {1, "\x45", 2, "\xD1\x95"}, {1, "\x46", 2, "\xD1\x96"},
    {1, "\x47", 2, "\xD1\x97"}, {1, "\x48", 2, "\xD1\x98"}, {1, "\x49", 2, "\xD1\x99"}, {1, "\x4A", 2, "\xD1\x9A"},
    {1, "\x4B", 2, "\xD1\x9B"}, {1, "\x4C", 2, "\xD1\x9C"}, {1, "\x4D", 2, "\xD1\x9E"}, {1, "\x4E", 2, "\xD1\x9F"},
    {1, "\x50", 2, "\xD1\xA3"}, {1, "\x51", 2, "\xD1\xB3"}, {1, "\x52", 2, "\xD1\xB5"}, {1, "\x53", 2, "\xD1\xAB"},
    {1, "\x5B", 1, "\x5B"},     {1, "\x5D", 1, "\x5D"},     {1, "\x5F", 1, "\x5F"},     {1, "\x60", 2, "\xD2\x90"},
    {1, "\x61", 2, "\xD0\x82"}, {1, "\x62", 2, "\xD0\x83"}, {1, "\x63", 2, "\xD0\x84"}, {1, "\x64", 2, "\xD0\x81"},
    {1, "\x65", 2, "\xD0\x85"}, {1, "\x66", 2, "\xD0\x86"}, {1, "\x67", 2, "\xD0\x87"}, {1, "\x68", 2, "\xD0\x88"},
    {1, "\x69", 2, "\xD0\x89"}, {1, "\x6A", 2, "\xD0\x8A"}, {1, "\x6B", 2, "\xD0\x8B"}, {1, "\x6C", 2, "\xD0\x8C"},
    {1, "\x6D", 2, "\xD0\x8E"}, {1, "\x6E", 2, "\xD0\x8F"}, {1, "\x6F", 2, "\xD0\xAA"}, {1, "\x70", 2, "\xD1\xA2"},
    {1, "\x71", 2, "\xD1\xB2"}, {1, "\x72", 2, "\xD1\xB4"}, {1, "\x73", 2, "\xD1\xAA"}, {1, "\x7F", 1, "\x7F"},
};
void Iso_5427_extToUtf::Register(const DBConfig &config) {
	const Iso_5427_extToUtf generated_function;
	const EncodingFunction function(generated_function.name, GeneratedEncodedFunction::Decode,
	                                generated_function.max_bytes_per_byte, generated_function.lookup_bytes,
	                                ISO_5427_EXT_to_utf8, generated_function.size);
	config.RegisterEncodeFunction(function);
}
} // namespace duckdb_encodings
} // namespace duckdb
