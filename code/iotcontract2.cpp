#include <eosio/eosio.hpp>
#include <eosio/time.hpp>

using namespace eosio;

class [[eosio::contract]] iotcontract2 : public contract {
public:
    using contract::contract;

    [[eosio::action]]
    void runiot(uint64_t num_iterations, const std::vector<uint8_t>& payload) {
        require_auth(get_self());

        for (uint64_t i = 0; i < num_iterations; ++i) {
            eosio::print("Performing IoT operation ", i+1, "/", num_iterations);

            // Access the payload data
            if (!payload.empty()) {
                // Process the payload data
                // ...
            }
        }

        eosio::print("IoT node test completed successfully.");
    }
};

EOSIO_DISPATCH(iotcontract2, (runiot))
