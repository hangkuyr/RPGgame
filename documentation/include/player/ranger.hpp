#ifndef RANGER_H
#define RANGER_H

#include "player.hpp"

/**
 * @brief      Class for Player's RPG Class Ranger.
 * @author     Lucas Marinho.
 */

class Ranger : public Player{
	public:
		/**
		 * @brief      Ranger's Constructor.
		 * @details    Sets the Attack, Main Attack, Player's name and all other variables based on the RPG Class atributes.
		 * @param[in]  name  The Player's name
		 */
		Ranger(std::string name);
		
		/**
		 * @brief      Override of the Player::p_damage.
		 * @details    Based on the main attack, do the Player's attack, it can do 3 different attacks.
		 * @return     The attack's damage.
		 */
		short p_damage() override;

		/**
		 * @brief      Override of the Player::level_up
		 * @details    If the Player::_next_level is 0 or less, the Player levels up and gain some attributes increase as level, life, attaks and dodge hability.
		 * @return     void
		 */
		void level_up() override;
};

#endif