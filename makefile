compile:
	g++ Driver.cpp Card.cpp DeckOfCards.cpp -Wall -std=c++98 -o driver.out

run:
	./driver.out

clean:
	rm *.out