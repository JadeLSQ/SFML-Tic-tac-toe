//
//  state.hpp
//  SFML_game_1
//
//  Created by LEI_Siqi  on 10/04/2018.
//  Copyright © 2018 LEI_Siqi . All rights reserved.
//

#ifndef state_h
#define state_h

namespace n1 {
    class State {
        public :
        //Initialize the state
        virtual void Init() = 0;
        //Handling input
        virtual void HandleInput() = 0;
        //update the game
        virtual void Update(float dt) = 0;
        //dt = delta = time differene between frames, allows us to create frame independent game play by factoring in the frame rate
        virtual void Draw (float dt) = 0;
        //We separate Pause and resume cause when we pause, we don't necessarily resume.
        virtual void Pause(){}
        virtual void Resume () {}
    };
}

#endif /* state_h */
