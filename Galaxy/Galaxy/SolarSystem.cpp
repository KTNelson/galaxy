//
//  SolarSystem.cpp
//  Galaxy
//
//  Created by Kieran Nelson on 09/02/2015.
//  Copyright (c) 2015 PlasticCat. All rights reserved.
//

#include "SolarSystem.h"
#include <random>

namespace PlasticCat
{
    namespace GLXY
    {
        SolarSystem::SolarSystem()
        {
            _sun = new Sun();
            generatePlanets();
        }
        
        void SolarSystem::generatePlanets()
        {
            std::random_device rd;
            
            // Choose a random mean between 1 and 6
            std::default_random_engine e1(rd());
            std::uniform_int_distribution<int> uniform_dist(1, 20);
            int numPlanets = uniform_dist(e1);
            
            for(int i = 0; i < numPlanets; i++)
            {
                _planets.push_back(new Planet());
            }
        }
        
        void SolarSystem::describe()
        {
            printf("This Solar System has %lu planets\r", _planets.size());
        }
    }
}