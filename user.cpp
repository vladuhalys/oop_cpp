#include "user.h"

User::User() {
	login = nullptr;
	password = nullptr;
	email = nullptr;
	phone = nullptr;
}
User::User(string* login) : User()
{
	this->login = login;
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
	if (login == nullptr)
	{
		cout << AppError::text_for_login_is_null << endl;
	}
	else if (login->size() < 3)
	{
		cout << AppError::text_for_login << endl;
	}
	else if (login->empty())
	{
		cout << AppError::text_for_login_empty << endl;
	}
	else
	{
		this->login = login;
	}
}

