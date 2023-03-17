#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45)
{
    std::cout << "Robotomy Request Form is created" << std::endl;
    this->_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45)
{
    std::cout << "Robotomy Request Form is created" << std::endl;
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src)
{
    std::cout << "Robotomy Request Form is copied" << std::endl;
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robotomy Request Form is destroyed" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    std::cout << "Robotomy Request Form is assigned" << std::endl;
    this->_target = rhs._target;
    return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << "Drilling noises" << std::endl;
        srand(time(0));
        if (rand() % 2 == 0)
        {
            std::cout << this->_target << " has been robotomized successfully" << std::endl;
        }
        else
        {
            std::cout << this->_target << " robotomization failed" << std::endl;
        }
    }
}

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &robot)
{
    out << "Robotomy Request Form: " << robot.getName() << ", grade to sign: " << robot.getGradeToSign() << ", grade to execute: " << robot.getGradeToExecute() << ", signed: " << robot.getSigned() << std::endl;
    return out;
}