
#pragma once
enum Spec { KOMPNAUKI = 1, INFORMATIC, MATEKONOM, FIZIINFORM, TRUDOVENAVCH };
void Output3(int a, std::string a_str);
union additSubj
{
    int mark_of_programming;
    int mark_of_chyslmetod;
    int mark_of_pedagog;
};
struct Student
{
    std::string prizv;
    int course;
    Spec spec;
    int mark_of_physics, mark_of_maths;
    additSubj mark_of_3_subj;

};
void PrintTable(Student* p, int N);
int QuantOfStudentsMarkThan45(Student* p, int N, int K);
std::string SubjmaxAvgMark(Student* p, int N, int K);
void Create(Student* p, const int N);
void Output3(int a, std::string a_str);

