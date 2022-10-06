#include "Computer.h"
#include "List.h"
#include "Student.h"
#include "Database.h"
using namespace std;
using namespace rapidjson;
// const char *PATH_DB_STUDENT = "db_student.json";
// const char *PATH_DB_COMPUTER = "db_student.json";

class Manage
{

private:
  /* data */
  List<Student> listStudent;
  List<Computer> listComputer;
public:
  Manage(/* args */);
  ~Manage();
  void ShowComp();
  //friend ostream &operator<<(ostream &, int );
};
