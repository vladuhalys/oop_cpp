#include "user.h"

User::User() {
	login = nullptr;
	password = nullptr;
	email = nullptr;
	phone = nullptr;
}
User::User(string* login) : User()
{
	setLogin(login);
}
User::User(string* login, string* password) : User(login)
{
	this->password = password;
}
User::User(string* login, string* password, string* email) : User(login, password)
{
	this->email = email;
}
User::User(string* login, string* password, string* email, string* phone) : User(login, password, email)
{
	this->phone = phone;
}

void User::setLogin(string* login)
{
	this->login = Validation::validateLogin(login);
}

