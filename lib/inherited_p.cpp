/*!
 *@author Dariusz Makowski
 *@date 05/07/2021    
 *Part of "Project Icarus"
 *Created by Dariusz Makowski on 05/07/2021.
 *Copyright (c) 2021 Dariusz Makowski LTD All rights reserved.
*/

#include "inherited_p.h"
#include "inherited.h"

namespace extra {
    namespace controllers {
        inheritedPrivate::inheritedPrivate(inherited *item) : core::base::baseClassPrivate(item) {

        }

        inheritedPrivate::~inheritedPrivate() {

        }
    }
}