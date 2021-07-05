/*!
 *@author Dariusz Makowski
 *@date 05/07/2021    
 *Part of "Project Icarus"
 *Created by Dariusz Makowski on 05/07/2021.
 *Copyright (c) 2021 Dariusz Makowski LTD All rights reserved.
*/

#include "baseClass.h"
#include "baseClass_p.h"

namespace core {
    namespace base {

        baseClass::baseClass() : d_ptr(new baseClassPrivate(this)) {
        }

        baseClass::~baseClass() {
            delete d_ptr;
        }

        baseClass::baseClass(baseClassPrivate &d) : d_ptr(&d) {

        }
        void baseClass::setName(const QString &name) {
            Q_Q(baseClass);
            d->setName(name);
        }
    }
}