int average(int nums[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += nums[i];
	}
	return sum / size;
}
float average(float nums[], int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += nums[i];
	}
	return sum / size;
}
double average(double nums[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += nums[i];
	}
	return sum / size;
}