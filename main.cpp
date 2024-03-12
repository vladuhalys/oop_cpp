#include "user.h"

int main() {
	string * login = new string("my_login");
	string * password = new string("my_password");

	User* new_user_1 = new User(login);

	User * new_user_2 = new User(login, password);
}

