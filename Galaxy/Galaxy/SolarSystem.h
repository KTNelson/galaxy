//
//  SolarSystem.h
//  Galaxy
//
//  Created by Kieran Nelson on 09/02/2015.
//  Copyright (c) 2015 PlasticCat. All rights reserved.
//

#ifndef __Galaxy__SolarSystem__
#define __Galaxy__SolarSystem__

#include "Planet.h"
#include "Sun.h"

#include <vector>

namespace PlasticCat
{
    namespace GLXY
    {
        class SolarSystem
        {
        public:
            SolarSystem();
            
            void describe();
            
        private:
            void generatePlanets();
            
        private:
            std::vector<Planet*> _planets;
            Sun* _sun;
        };
    }
}

#endif /* defined(__Galaxy__SolarSystem__) */
