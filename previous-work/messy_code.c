typedef struct 
{
	int        width;
	int        precision;
	char    convertion;
} pf_convertion_i;

typedef struct 
{
	int	minus;
	int	plus;
	int	hashtag;
	int	space;
	int	zero;
} pf_flags_i;

pf_convertion_i    ft_pf_control(char *s)
{
	pf_convertion_i pf_i = {0};
	char    *ptr_s;

	ptr_s = s;
	while (*ptr_s)
	{
		if (strchr("-+ #0", *ptr_s))
			ptr_s++;
		if (strchr("123456789", *ptr_s)) 
		{
			pf_i.width = atoi(ptr_s);
			while (isdigit(*ptr_s)) 
				ptr_s++;
		}
		if (*ptr_s == '.') 
		{
			ptr_s++;
			pf_i.precision = atoi(ptr_s);
			while (isdigit(*ptr_s))
				ptr_s++;
		}
		if (strchr("cspdiuxX%", *ptr_s)) 
		{
			pf_i.convertion = *ptr_s;
			break;
		}
	}
	return (pf_i);
}

pf_flags_i	ft_pf_flags(char *s)
{
	pf_flags_i pf_flags = {0};
	char    *ptr_s;

	ptr_s = s;
	while (*ptr_s)
	{
		if (strchr("-+ #0", *ptr_s))
		{

			ptr_s++;
		}
		else if (strchr("123456789", *ptr_s)) 
		{
			pf_flags.width = atoi(ptr_s);
			while (isdigit(*ptr_s)) 
				ptr_s++;
		}
		if (*ptr_s == '.') 
		{
			ptr_s++;
			pf_flags.precision = atoi(ptr_s);
			while (isdigit(*ptr_s))
				ptr_s++;
		}
		if (strchr("cspdiuxX%", *ptr_s)) 
		{
			pf_flags.convertion = *ptr_s;
			break;
		}
	}
	return (pf_flags);
}

int main() {
  char  *s1 = "-10d";
  char  *s2 = "+5d";
  char  *s3 = "0.5d";
  pf_struct_i pf_i1;
  pf_struct_i pf_i2;
  pf_struct_i pf_i3;
  
  pf_i1 = ft_pf_control(s1);
  pf_i2 = ft_pf_control(s2);
  pf_i3 = ft_pf_control(s3);

  return 0;
}