

int marks_summation(int* marks, int number_of_students, char gender) {
    int sum = 0;
    if (gender == 'b'){
        for(int i = 0; i < number_of_students; i += 2)  sum += marks[i];
    } else {
        for (int i = 1; i < number_of_students; i += 2) sum += marks[i];
    }
    return sum;
}

// Code credit :- Akshat Jain  
//HackerRank Link :- https://www.hackerrank.com/akshat_jjain?hr_r=1
