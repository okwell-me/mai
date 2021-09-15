int strConteins(char* a, char* str)
{
	int it = -1;

	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a[0])
		{
			short int succ = 1;
			int j = 0;
			while (a[j] != '\0')
			{
				if (a[j] != str[i + j])
				{
					succ = 0;
					break;
				}
				j++;
			}
			if (succ) return i;
			else return -1;
		}
		i++;
	}
}