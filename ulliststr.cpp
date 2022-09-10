#include <cstddef>
#include <stdexcept>
#include "ulliststr.h"

ULListStr::ULListStr()
{
  head_ = NULL;
  tail_ = NULL;
  size_ = 0;
}

ULListStr::~ULListStr()
{
  clear();
}

bool ULListStr::empty() const
{
  return size_ == 0;
}

size_t ULListStr::size() const
{
  return size_;
}

// WRITE YOUR CODE HERE



void ULListStr::push_back(const std::string& val){
  if(head_ == nullptr){     //empty list  
    Item* temp = new Item();  // create new item
    temp -> first = 9;
    temp -> last = 10;        
    temp -> val[9] = val;    // pushback vale in item
    head_ = temp;           //set head
    tail_ = temp;           // set tail
    size_ = 1;             //size of elements in list
  }
  else if(tail_->last == 10){ //case with previous node being full or end of array is used 
    Item* temp = new Item();  // create new item
    temp -> first = 0;
    temp -> last = 1;        
    temp -> val[0] = val;    // pushback vale in item
    temp -> prev = tail_; 
    tail_ = temp;           // set tail
    temp -> prev -> next = tail_;
    size_ += 1;             //size of elements in list

  }
  else{                         // all other cases in same node
    tail_ -> val[(tail_->last)] = val;
    tail_ -> last += 1;
    size_ += 1;
  }

  }


void ULListStr::pop_back(){
  if(head_ == nullptr){     //empty list
  //If empty do nothing
  }
  else if((tail_->last) - (tail_->first) == 1){ // only element in node
    if(tail_ == head_){        //  if only 1 item
      head_ = nullptr;
      delete tail_;
      tail_ = nullptr;
      size_ -=1;
    }
    else{                     // multiple items
      tail_ = tail_->prev;
      delete tail_->next;
      tail_->next = nullptr;
      size_ -=1;
    }
  }
  else{                   //multi item multi node
    tail_->val[((tail_->last) -1)] = "";
    tail_->last -= 1;
    size_ -=1;
  }
}

void ULListStr::push_front(const std::string& val){
  if(head_ == nullptr){     //empty list   
    Item* temp = new Item();  // create new item
    temp -> first = 0;
    temp -> last = 1;        
    temp -> val[0] = val;    // pushfront value in item
    head_ = temp;           //set head
    tail_ = temp;           // set tail
    size_ = 1;             //size of elements in list
  }
  else if(head_->first == 0){ //case with first node being full or start of array is used
    Item* temp = new Item();  // create new item
    temp -> first = 9;
    temp -> last = 10;        
    temp -> val[9] = val;    // pushfront value in item
    temp -> next = head_; 
    head_ = temp;           // set head
    temp -> next -> prev = head_; // re stich list
    size_ += 1;             //size of elements in list
  }
  else{
    head_ -> val[((head_->first)-1)] = val;  // push in same head node
    head_ -> first -= 1;
    size_ += 1; 
  }

  }

void ULListStr::pop_front(){

  if(head_ == nullptr){     //empty list
  //If empty do nothing
  }
  else if((head_->last) - (head_->first) == 1){ // only element in node
    if(tail_ == head_){        //  if only 1 item
      head_ = nullptr;
      delete tail_;
      tail_ = nullptr;
      size_ -=1;
    }
    else{                       //multiple items
      head_ = head_ -> next;
      delete head_ -> prev;
      head_ -> prev = nullptr;
      size_ -=1;
    }
  }
  else{                           // multi item multi node
    head_ -> val[((head_->first))] = "";
    head_-> first += 1;
    size_ -=1;
  }
}

std::string* ULListStr::getValAtLoc(size_t loc) const{
  Item* tempHead = head_;  //temp head
  size_t tempLoc = loc;    // temp loc 
  if((loc+1) > size_){     // check for out of bounds
    return nullptr;
  }
  else if(loc < 0){       // check for out of bounds
    return nullptr;
  }
  else{                 // loops until tempHead is pointing to correct node and tempLoc is respective index on node

    while((tempLoc+1) > ((tempHead->last) - (tempHead->first))){ // gets loc and tempPtr to respective node
    tempLoc = tempLoc - ((tempHead->last) - (tempHead->first));
    tempHead = tempHead->next;
   }
   if (tempLoc > 0)       // almost all cases, when not first element
   {
    std::string* tempPtr2 = & (tempHead->val[((tempHead->first) + tempLoc)]); 
    return tempPtr2;
   }                      // if first element in a node
    std::string* tempPtr = & (tempHead->val[((tempHead->first))]); 
    return tempPtr;
  }
}



std::string const & ULListStr::front() const{
  
  std::string* ptr = &(head_->val[(head_->first)]); // gets very first element

  return *ptr;
  
}

std::string const & ULListStr::back() const{
  
  std::string* ptr = &(tail_->val[((tail_->last) -1)]); // gets last element

  return *ptr;

}



void ULListStr::set(size_t loc, const std::string& val)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  *ptr = val;
}

std::string& ULListStr::get(size_t loc)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

std::string const & ULListStr::get(size_t loc) const
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

void ULListStr::clear()
{
  while(head_ != NULL){
    Item *temp = head_->next;
    delete head_;
    head_ = temp;
  }
  tail_ = NULL;
  size_ = 0;
}
