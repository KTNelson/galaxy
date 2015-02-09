//
//  Galaxy.cpp
//  Galaxy
//
//  Created by Kieran Nelson on 09/02/2015.
//  Copyright (c) 2015 PlasticCat. All rights reserved.
//

#include "Galaxy.h"
#include <random>

namespace PlasticCat
{
    namespace GLXY
    {
        Galaxy::Galaxy()
        {
            generateSystems();
            describe();
        }
        
        void Galaxy::generateSystems()
        {
            std::random_device rd;
            
            std::default_random_engine e1(rd());
            std::uniform_int_distribution<int> uniform_dist(10, 100);
            int numPlanets = uniform_dist(e1);
            
            for(int i = 0; i < numPlanets; i++)
            {
                _systems.push_back(new SolarSystem());
            }
        }
        
        void Galaxy::describe()
        {
            printf("This Galaxy has %lu Solar Systems\r", _systems.size());
            for(auto system : _systems)
            {
                system->describe();
            }
        }
    }
}