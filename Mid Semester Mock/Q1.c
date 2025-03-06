struct mystruct{int data;};
static struct mystruct s;
void alter(void){s.data = 9;}
int main(void){alter(); return s.data;}