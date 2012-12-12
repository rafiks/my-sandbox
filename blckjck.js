// Card Constructor
// Card Constructor
function Card(suit, number) {
	var suit = suit;
	var number = number;
	this.getNumber = function (){
		return number;
	};
	this.getSuit = function (){
		return suit;
	};
	this.getValue = function(){
		if (number >10) {
			return 10;
		} else if (number === 1) {
			return 11;
		} else {
			return number;
		}
	};
	
}

function deal() {
	var suit = Math.floor(Math.random()*4+1);
	var rank = Math.floor(Math.random()*13+1);
	return new Card(suit, rank);
}
//deal();

//var card = new deal();
//console.log(card.getSuit());

//function Hand() {
//	var cards = [];
//	while (cards.length <2) {
//	cards.push(deal());
//	}
//	this.getHand = function() {
//		return cards;
//	};
	//return console.log(cards);
//}
//Hand();
//console.log(Hand.getHand());
function Hand() {
	var cards = [];
    var card0 = deal();
    var card1 = deal();
    
    var cards = [card0, card1];
    this.getHand = function(){
    //	cards.push(deal());
    //	cards.push(deal());
    return cards;
    };
      
}
//var handy = new Hand();
//console.log(handy.getHand());
