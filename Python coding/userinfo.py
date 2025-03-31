user = {}
name = input('What is your name? : ')
age = input('What is you age? : ')
fav_movies = input('Your favourite movies seperated by commas. : ').split(',')
fav_songs = input('Your favourite songs seperated by commas. : ').split(',')

user['name'] = name
user['age'] = age
user['fav_movies'] = fav_movies
user['fav_songs'] = fav_songs
print('\n Results.\n')

for key ,value in user.items():
    print(f'{key} : {value}')
