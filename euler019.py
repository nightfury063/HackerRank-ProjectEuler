_days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

def is_leap(year):
	return (year%4 ==0 and year%100 != 0) or (year%400 == 0)


def days_in_month(month, year):
	if month == 1:
		return _days_in_month[1] + (1 if is_leap(year) else 0)
	else:
		return _days_in_month[month]

def days_in_year(year):
	return 365 + (1 if is_leap(year) else 0)

def days_from_1900_to_2000():
	num_days = 0
	for year in xrange(1900, 2000):
		num_days += days_in_year(year)
	return num_days

def sundays_from_2000_to_2400():
	day = 5 #Saturday
	num_sundays = 0
	for year in xrange(2000, 2400):
		for month in xrange(12):
			day = (day + days_in_month(month, year)) % 7
			if day == 6: #if day is sunday
				num_sundays += 1
	return num_sundays #688


sundays_per_400_years = 688

def solve(to_year, to_month):
	# Returns the number of sundays from 1.1.1900 to day.month.year
	if to_year < 1900:
		return 0
	to_month -= 1
	result = 0
	day_of_week = 0 #monday

	year = 1900

	#simulate until 1.1.2000
	if to_year>2000:
		while year < 2000:
			for month in xrange(12):
				if day_of_week == 6:
					result += 1
				day_of_week = (day_of_week + days_in_month(month, year)) % 7
			year += 1
	
		num_400_years = (to_year - 2000) / 400
		result += num_400_years * sundays_per_400_years
		year += num_400_years * 400

	#simulate until current year
	while year < to_year:
		for month in xrange(12):
			if day_of_week == 6:
				result += 1
			day_of_week = (day_of_week + days_in_month(month, year)) % 7
		year += 1

	#simulate until current month
	month = 0 #starting on january
	while month <= to_month:
		if day_of_week == 6:
			result += 1
		day_of_week = (day_of_week + days_in_month(month, year)) % 7
		month += 1
	return result	 
	


T = int(raw_input())
for i in xrange(T):
	y1, m1, d1 = map(int, raw_input().split())
	y2, m2, d2 = map(int, raw_input().split())


	d1 -= 1
	if d1 == 0:
		m1 -= 1
		if m1 == 0:
			y1 -= 1
			m1 = 12

	print solve(y2, m2)-solve(y1, m1)


