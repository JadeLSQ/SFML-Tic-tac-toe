//
//  StateMachine.cpp
//  SFML_game_1
//
//  Created by LEI_Siqi  on 10/04/2018.
//  Copyright © 2018 LEI_Siqi . All rights reserved.
//

#include "StateMachine.hpp"


namespace n1{
    
    void StateMachine::AddState (StateRef newState, bool isReplacing){
        this->_isAdding = true;
        this->_isReplacing = true;
        this-> _newState = std::move(newState);
        
    }
    
    void StateMachine ::RemoveState(){
        this->_isRemoving = true;
    }
    void StateMachine::ProcessStateChanges ()
    {
        if(this->_isRemoving && !this->_states.empty()){
            this->_states.pop();
            if(!this->_states.empty()){
                //resume next state
                this->_states.top()->Resume();
            }
            this->_isRemoving = false;
        }
        
        if (this->_isAdding){
            if (!this->_states.empty()){
                if(this->_isReplacing){
                    this->_states.pop();
                }
                else {
                    this->_states.top() ->Pause();
                }
            }
            this->_states.push(std::move(this -> _newState));
            this -> _states.top() -> Init();
            this-> _isAdding = false;
        }
    }
    StateRef &StateMachine ::GetActiveState()
    {
        return this->_states.top();
    }
}
