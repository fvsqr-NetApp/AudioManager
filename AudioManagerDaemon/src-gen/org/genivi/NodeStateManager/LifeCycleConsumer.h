/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.5.201312121915.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
/**
 * @author Christian Linke
 */
#ifndef ORG_GENIVI_NODESTATEMANAGER_Life_Cycle_Consumer_H_
#define ORG_GENIVI_NODESTATEMANAGER_Life_Cycle_Consumer_H_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/types.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace NodeStateManager {

class LifeCycleConsumer {
 public:
    virtual ~LifeCycleConsumer() { }

    static inline const char* getInterfaceId();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* LifeCycleConsumer::getInterfaceId() {
    static const char* interfaceId = "org.genivi.NodeStateManager.LifeCycleConsumer";
    return interfaceId;
}

CommonAPI::Version LifeCycleConsumer::getInterfaceVersion() {
    return CommonAPI::Version(1, 0);
}


} // namespace NodeStateManager
} // namespace genivi
} // namespace org

namespace CommonAPI {

}


namespace std {
    //hashes for types

    //hashes for error types
}

#endif // ORG_GENIVI_NODESTATEMANAGER_Life_Cycle_Consumer_H_
