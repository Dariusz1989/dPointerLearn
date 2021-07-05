/*!
 *@author Dariusz Makowski
 *@date 05/07/2021    
 *Part of "Project Icarus"
 *Created by Dariusz Makowski on 05/07/2021.
 *Copyright (c) 2021 Dariusz Makowski LTD All rights reserved.
*/

#ifndef SIMPLE_01_BASECLASS_H
#define SIMPLE_01_BASECLASS_H

#include "qglobal.h"
#include "QString"
#include "baseClass_p.h"


namespace core {
    namespace base {
        class baseClassPrivate;
        class baseClass {
            Q_DECLARE_PRIVATE(baseClass);
        public:
            baseClass();
            ~baseClass();
            void setName(const QString&name);
        protected:
            baseClass(baseClassPrivate &d);
            baseClassPrivate *d_ptr;
        };

    }
}

#endif //SIMPLE_01_BASECLASS_H
