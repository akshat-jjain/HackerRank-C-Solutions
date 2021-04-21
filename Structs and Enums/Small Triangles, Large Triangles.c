
int area(triangle t) {
    return((t.a+t.b+t.c)*(t.a+t.b-t.c)*(t.a+t.c-t.b)*(t.b+t.c-t.a)); 
}
void sort_by_area(triangle* tr, int n) {
	for(int i = 0; i < n - 1; i ++) 
        for(int j = i + 1; j < n; j ++)
            if(area(tr[i]) > area(tr[j])) {
                triangle t = tr[i];
                tr[i] = tr[j];
                tr[j] = t;
            }
}

// Code credit :- Akshat Jain  
//HackerRank Link :- https://www.hackerrank.com/akshat_jjain?hr_r=1
