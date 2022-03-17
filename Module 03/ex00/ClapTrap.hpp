//Во-первых, вы должны реализовать класс! Как оригинально!
//Он будет называться ClapTrap и будет иметь следующие частные атрибуты, инициализированные значениями, указанными в скобках:
//• Имя, которое передается в качестве параметра конструктору.
//• Очки жизни (10) представляют собой здоровье ClapTrap.
//• Очки энергии (10)
//• Урон от атаки (0)
//Добавьте следующие общедоступные функции-члены, чтобы ClapTrap выглядел более реалистично:
//• недействительная атака(const std::string& target);
//• void takeDamage(беззнаковая целая сумма);
//• void beRepaired(беззнаковая целая сумма);
//Когда ClapTrack атакует, цель теряет хиты на <урон от атаки>.
//Когда ClapTrap восстанавливает себя, он получает обратно <количество> очков жизни. Атака и ремонт стоят 1 очко энергии каждое. 
//Конечно, ClapTrap ничего не может сделать, если у него не осталось ни очков жизни, ни очков энергии.

//Во всех этих функциях-членах вы должны вывести сообщение, описывающее происходящее. 
//Например, функция Attack() может отображать что-то вроде (разумеется, без угловых скобок):
//ClapTrap <name> атакует <цель>, нанося <damage> единиц урона!
//Конструкторы и деструктор также должны отображать сообщение, чтобы ваши коллеги-оценщики могли легко увидеть, что они были вызваны.
//Внедрите и сдайте собственные тесты, чтобы убедиться, что ваш код работает должным образом.

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class ClapTrap {
	private:
		int _health_pionts;
		int _energy_points;
		int _attack_damage;
		std::string _name;
	public:
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap& other);
		ClapTrap &operator=(ClapTrap const &other);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int ClapTrap::getRawBits(int val) const;
		void ClapTrap::setRawBits(int const raw);
};

#endif