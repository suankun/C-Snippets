// https://www.codewars.com/kata/5a6663e9fd56cb5ab800008b/train/c
typedef struct Human_Cat_Dog_Years {
    unsigned human_years, cat_years, dog_years;
} years;

years human_years_cat_years_dog_years(unsigned human) {
  years res;
  int cat=0, dog=0;
  for (int i=1; i<=human; i++) {
    if (i==1) {
      cat += 15;
      dog += 15;
    }
    if (i==2) {
      cat += 9;
      dog += 9;
    }
    if (i>2) {
      cat += 4;
      dog += 5;
    }
  }
  res.human_years = human;
  res.cat_years = cat;
  res.dog_years = dog;
  return res;
}
//
typedef struct Human_Cat_Dog_Years {
    unsigned human_years, cat_years, dog_years;
} years;

years human_years_cat_years_dog_years(unsigned human)
{
	return (years) {
		.human_years = human,
		.dog_years = ((human > 0) ? 15 : 0) + ((human > 1) ? 9 : 0) + ((human > 2) ? (human - 2) * 5 : 0),
		.cat_years = ((human > 0) ? 15 : 0) + ((human > 1) ? 9 : 0) + ((human > 2) ? (human - 2) * 4 : 0),
	};
}