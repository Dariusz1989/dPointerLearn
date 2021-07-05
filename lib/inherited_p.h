/*!
 *@author Dariusz Makowski
 *@date 05/07/2021    
 *Part of "Project Icarus"
 *Created by Dariusz Makowski on 05/07/2021.
 *Copyright (c) 2021 Dariusz Makowski LTD All rights reserved.
*/

#ifndef SIMPLE_01_INHERITED_P_H
#define SIMPLE_01_INHERITED_P_H

#include "baseClass_p.h"
#include "inherited.h"

namespace extra {
    namespace controllers {
        class inherited;
        class inheritedPrivate : public core::base::baseClassPrivate {
            Q_DECLARE_PUBLIC(inherited);
        public:
            inheritedPrivate(inherited *item);
            ~inheritedPrivate();
        };

    }
}


#endif //SIMPLE_01_INHERITED_P_H
