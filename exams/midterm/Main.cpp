#include <iostream>
#include <iomanip>
#include "Person.cpp"
#include "Student.cpp"
#include "Employee.cpp"
#include "Undergraduate.cpp"
#include "Graduate.cpp"
#include "Staff.cpp"
#include "Professor.cpp"

using namespace std;

void testPerson(Person);
void testStudent(Student);
void testEmployee(Employee);

// (14) Your Client file with the main method should create objects of
//      all the classes and test all the methods with appropriate data
//      of your choice.
int main() {
    cout << boolalpha << fixed << setprecision(2);

    /* Person */ {
        cout << endl << "-- Person --" << endl;

        Person p = Person("A Name");

        testPerson(p);

        cout << "type: " << p.getType() << endl;
    }

    /* Student */ {
        cout << endl << "-- Student --" << endl;

        Student s = Student("S Name", 4);

        testPerson(s);
        testStudent(s);

        cout << "type: " << s.getType() << endl;
    }

    /* Employee */ {
        cout << endl << "-- Employee --" << endl;

        Employee e = Employee("E Name", 10000);

        testPerson(e);
        testEmployee(e);

        cout << "type: " << e.getType() << endl;
    }

    /* Undergraduate */ {
        cout << endl << "-- Undergraduate -- " << endl;

        Undergraduate u = Undergraduate("U Name", 3.5, 1);

        testPerson(u);
        testStudent(u);

        cout << "year: " << u.getYear() << endl;

        u.setYear(3);

        cout << "(after set) year: " << u.getYear() << endl;

        cout << "type: " << u.getType() << endl;
    }

    /* Graduate */ {
        cout << endl << "-- Graduate -- " << endl;

        Graduate g = Graduate("G Name", 3.9, "phd");

        testPerson(g);
        testStudent(g);

        cout << "master: " << g.isMaster() << endl;
        cout << "phd: " << g.isPHD() << endl;
        cout << "goal: " << g.getGoal() << endl;

        g.setGoal("master");

        cout << "(after set) master: " << g.isMaster() << endl;
        cout << "(after set) phd: " << g.isPHD() << endl;
        cout << "(after set) goal: " << g.getGoal() << endl;

        cout << "type: " << g.getType() << endl;
    }

    /* Staff */ {
        cout << endl << "-- Staff --" << endl;

        Staff s = Staff("T Name", 20000, false);

        testPerson(s);
        testEmployee(s);

        cout << "manager: " << s.isManager() << endl;

        s.setManager(true);

        cout << "(after set) manager: " << s.isManager() << endl;

        cout << "type: " << s.getType() << endl;
    }

    /* Professor */ {
        cout << endl << "-- Professor --" << endl;

        Professor f = Professor("F Name", 30000, "part-time");

        testPerson(f);
        testEmployee(f);

        cout << "part: " << f.isPartTime() << endl;
        cout << "full: " << f.isFullTime() << endl;
        cout << "status: " << f.getStatus() << endl;

        f.setStatus("full-time");

        cout << "(after set) part: " << f.isPartTime() << endl;
        cout << "(after set) full: " << f.isFullTime() << endl;
        cout << "(after set) status: " << f.getStatus() << endl;

        cout << "type: " << f.getType() << endl;
    }

    return 0;
}

void testPerson(Person p) {
    cout << "*Person" << endl;
    cout << "| name: " << p.getName() << endl;

    p.setName("Different Name");

    cout << "| (after set) name: " << p.getName() << endl;
}

void testStudent(Student s) {
    cout << "*Student" << endl;
    cout << "| gpa: " << s.getGPA() << endl;
    cout << "| honors: " << s.isHonors() << endl;

    s.setGPA(3);

    cout << "| (after set) gpa: " << s.getGPA() << endl;
    cout << "| (after set) honors: " << s.isHonors() << endl;

    s.setCourse(0, "Sample Course A");
    s.setCourse(1, "Sample Course B");

    cout << "| courses:" << endl
         << "|  - " << s.getCourse(0) << endl
         << "|  - " << s.getCourse(1) << endl;

    s.setCourse(1, "Sample Course C");

    cout << "| (after set) courses:" << endl
         << "|  - " << s.getCourse(0) << endl
         << "|  - " << s.getCourse(1) << endl;
}

void testEmployee(Employee e) {
    cout << "*Employee" << endl;
    cout << "| salary: " << e.getSalary() << endl;

    e.increaseSalary();

    cout << "| (after incr) salary: " << e.getSalary() << endl;

    e.setSalary(90000);

    cout << "| (after set) salary: " << e.getSalary() << endl;
}