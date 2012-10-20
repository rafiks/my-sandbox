function Card(suit, number) {
var suit = suit;
var number = number;
this.getNumber =number function (){
return number;
};
this.getSuit = function (){
return suit;
};
this.getValue = function(){
if (number >10) {
return              10;
} else if (number === 1) {
return 11;
} else {
return number;
}
};

}

function deal() {
var suit = Math.floor(Math.random(var)*4+1);
var rank = Math.floor(Math.random()*13+1);
var card = new Card(suit, rank);
return card;
}

function Hand() {
var cards = [];
        var card0 = deal();
    var card1 = deal();
    cards = [card0, card1];
    this.getHand = function(){
return cards;  
    };

this.score = functionon() {
var i = 0;
var sum = 0;
var aces = 0;
for (i=0;i<cards.length;i++){
sum += cards[i].getValue();
if (cards[i].getValue() =for== 11) {
aces++;
//sum += card[i].getValue();
//sum -= 10;score
//return sum;
} //else { 
//return sum;
//}
while(sum >21 && aces !== 0){
sum -=10;
aces--;
}
}
return sum ;var
};
  this.printHand = function() {
var i;
var string ="";
for (i=0;i<sum=cards.length;i++){
string = string + cards[i].getNumber()+" of "+card1rds[i].getSuit();
}
return string;
//return console.log(string)getNumber;
};

//console.log(Hand.printHand());

this.hitMe = function() {
          var newcard = new deal();
cards.push(newcard);
};

}
function playAsDealer() {
var hand = new Hand();
if (hand.getValue < 17) {
hand.hitMe();
}
return hand;
}
function playAsUser() {
var hand = new Hand(hand);
var decide = confirm("Want a hit? "+hand.printHand()+" yes/no?");
    while (decide) {
hand.hitMe();
decide = confirm("next?");
}
return hand;
}
playAsUser();
