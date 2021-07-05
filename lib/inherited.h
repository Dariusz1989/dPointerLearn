/*!
 *@author Dariusz Makowski
 *@date 05/07/2021    
 *Part of "Project Icarus"
 *Created by Dariusz Makowski on 05/07/2021.
 *Copyright (c) 2021 Dariusz Makowski LTD All rights reserved.
*/

#ifndef SIMPLE_01_INHERITED_H
#define SIMPLE_01_INHERITED_H

#include <qobject.h>
#include "baseClass.h"
#include "inherited_p.h"


namespace extra {
    namespace controllers {
        class inheritedPrivate;
        class inherited : public QObject, public core::base::baseClass {
        Q_OBJECT
            Q_DECLARE_PRIVATE_D(QObject::d_ptr.data(), inherited);
            //Q_DECLARE_PRIVATE_D(core::base::baseClass::d_ptr, inherited); // I can only inherit 1 base class?
        public:
            inherited();
            ~inherited();
        protected:
            inherited(inheritedPrivate &d);

        };


    }
}

#endif //SIMPLE_01_INHERITED_H
