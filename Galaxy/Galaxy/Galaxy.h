//
//  Galaxy.h
//  Galaxy
//
//  Created by Kieran Nelson on 09/02/2015.
//  Copyright (c) 2015 PlasticCat. All rights reserved.
//

#ifndef __Galaxy__Galaxy__
#define __Galaxy__Galaxy__

#include "SolarSystem.h"
#include <vector>

namespace PlasticCat
{
    namespace GLXY
    {
        class Galaxy
        {
        public:
            Galaxy();
            
            void describe();
            
        private:
            void generateSystems();
            
        private:
            std::vector<SolarSystem*> _systems;
        };
    }
}

#endif /* defined(__Galaxy__Galaxy__) */
