/*!
 *@author Dariusz Makowski
 *@date 05/07/2021    
 *Part of "Project Icarus"
 *Created by Dariusz Makowski on 05/07/2021.
 *Copyright (c) 2021 Dariusz Makowski LTD All rights reserved.
*/

#include "inherited.h"
#include "inherited_p.h"

namespace extra {
    namespace controllers {
        inherited::inherited() : QObject(), core::base::baseClass(*new inheritedPrivate(this)) {

        }
        inherited::~inherited() {

        }
        inherited::inherited(inheritedPrivate &d) : QObject(), core::base::baseClass(d) {

        }
    }
}