/*!
 *@author Dariusz Makowski
 *@date 05/07/2021    
 *Part of "Project Icarus"
 *Created by Dariusz Makowski on 05/07/2021.
 *Copyright (c) 2021 Dariusz Makowski LTD All rights reserved.
*/

#include "baseClass_p.h"

namespace core {
    namespace base {
        baseClassPrivate::baseClassPrivate(baseClass *base) : q_ptr(base) {}
        void baseClassPrivate::setName(const QString &name) {
            mName = name;
        }
    }
}