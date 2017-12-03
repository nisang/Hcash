// This file is generated by hsrcore_json_to_cpp from ${json_file_name}
#ifdef HSR_TEST_NETWORK
#include <blockchain/GenesisJson.hpp>
#include <blockchain/GenesisState.hpp>

#include <string>
#include <fc/crypto/sha256.hpp>
#include <fc/io/raw.hpp>

namespace hsrcore { namespace blockchain {


GenesisState get_builtin_genesis_block_config()
{
  unsigned total_size = sizeof(raw_genesis_config0);
  std::unique_ptr<char[]> buffer(new char[total_size]);
  char *ptr = buffer.get();
  memcpy(ptr, (const char*)raw_genesis_config0, sizeof(raw_genesis_config0));
  ptr += sizeof(raw_genesis_config0);
  return fc::raw::unpack<GenesisState>(buffer.get(), total_size);
}

fc::sha256 get_builtin_genesis_block_state_hash()
{
  fc::sha256::encoder encoder;
  encoder.write((const char*)raw_genesis_config0, sizeof(raw_genesis_config0));
  return encoder.result();
}

} } // end namespace hsrcore::blockchain
#endif