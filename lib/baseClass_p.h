/*!
 *@author Dariusz Makowski
 *@date 05/07/2021    
 *Part of "Project Icarus"
 *Created by Dariusz Makowski on 05/07/2021.
 *Copyright (c) 2021 Dariusz Makowski LTD All rights reserved.
*/

#ifndef SIMPLE_01_BASECLASS_P_H
#define SIMPLE_01_BASECLASS_P_H

#include "qglobal.h"
#include "QString"

namespace core {
    namespace base {
        class baseClass;
        class baseClassPrivate {
            Q_DECLARE_PUBLIC(baseClass);
            QString mName;
        public:
            baseClassPrivate(baseClass *base);
            void setName(const QString&name);
        protected:
            baseClass *q_ptr;
        };
    }
}

#endif //SIMPLE_01_BASECLASS_P_H
