//
//  StateMachine.hpp
//  SFML_game_1
//
//  Created by LEI_Siqi  on 10/04/2018.
//  Copyright © 2018 LEI_Siqi . All rights reserved.
//

#ifndef StateMachine_hpp
#define StateMachine_hpp

#include <memory>
#include <stack>
#include "state.hpp"

namespace n1 {
    typedef std::unique_ptr<State> StateRef;
    
    class StateMachine {
        public :
        StateMachine(){}
        ~StateMachine(){}
        //isReplacing = true, I'm replacing the current state which is available
        void AddState (StateRef newState, bool isReplacing = true);
        void RemoveState();
        
        void ProcessStateChanges();
        //return the top level state
        
        StateRef &GetActiveState();
    private:
        std::stack<StateRef> _states;
        StateRef _newState;
        
        bool _isRemoving;
        bool _isAdding;
        bool _isReplacing;
        
    };
}


#endif /* StateMachine_hpp */
