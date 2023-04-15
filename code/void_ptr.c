enum type { 
    TYPE_CHAR,
    TYPE_INT,
    TYPE_FLOAT
};

void* add(enum type t, void *vp1, void *vp2)
{
	int k, l;
    switch (t) {
        case TYPE_CHAR:
        break;

        case TYPE_INT:
        k = (*(int *)vp1);
		l = (*(int *)vp2);
		int p = (k+l);
		int* q = &p;
		return q;
        
		case TYPE_FLOAT:
        break;
    }
}

int main()
{
	int i=5;
	int j = 6;
	
	int* ret = add(TYPE_INT, &i, &j);
	printf("%d\n",*ret);
	return 0;
}
