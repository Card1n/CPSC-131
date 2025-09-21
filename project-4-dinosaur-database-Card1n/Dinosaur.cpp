/**
	name: Cardin Phan
	CWID: 884699653
	Email: Phancardin@csu.fullerton.edu
*/

/**
 * Work on this code!
 */

#include "Dinosaur.hpp"


#include <iostream>
#include <sstream>
#include <string>


using std::cout, std::endl;
using std::string;


namespace CPSC131::Databases::Dinosaurs
{
	///	Constructor
	Dinosaur::Dinosaur() : id_(0), name_(""), diet_(""), 
	period_(""), lived_in_(""),
	type_(""), length_(""), taxonomy_(""), 
	named_by_(""), species_(""), link_("")
	{}
	
	///	Copy Constructor (Copy CTOR)
	Dinosaur::Dinosaur(const Dinosaur& other)
	{
		// TODxO: Your code here
		id_ = other.id_;
		name_ = other.name_;
		diet_ = other.diet_;
		period_ = other.period_;
		lived_in_ = other.lived_in_;
		type_ = other.type_;
		length_ = other.length_;
		taxonomy_ = other.taxonomy_;
		named_by_ = other.named_by_;
		species_ = other.species_;
		link_ = other.link_;
	}
	
	/**
	 * Assignment operator
	 * 
	 * What does it mean to copy one Dinosaur object to another?
	 * 
	 * For this project, we'll say this is simply a matter of
	 * copying each member, by value.
	 */
	const Dinosaur& Dinosaur::operator=(const Dinosaur& other)
	{
		// TxODO: Your code here
		if (this != &other){
		this->id_ = other.id_ ;
		this->name_ = other.name_ ;
		this->diet_ = other.diet_ ;
		this->period_ = other.period_;
		this->lived_in_ = other.lived_in_;
		this->type_ = other.type_;
		this->length_ = other.length_;
		this->taxonomy_ = other.taxonomy_;
		this->named_by_ = other.named_by_;
		this->species_ = other.species_;
		this->link_ = other.link_;
		}
		//NOTE: this-> could mess up code 
		
		return *this;
	}
	
	/**
	 * Comparison/Equality operator.
	 * 
	 * For this project, we'll say that two Dinosaur objects are "equal"
	 * if they have matching IDs, and nothing else.
	 * 
	 * This will allow our BST to easily compare these objects.
	 */
	bool Dinosaur::operator==(const Dinosaur& other)
	{
		// TxODO: Your code here
		return this->id_ == other.id_;
	}
	
	///	Inequality operator; The opposite of the equality operator
	bool Dinosaur::operator!=(const Dinosaur& other)
	{
		// TxODO: Your code here
		return this->id_ != other.id_;
	}
	
	/**
	 * Greater-than comparison operator.
	 * 
	 * Because our BST will attempt to use this operator to sort
	 * our Dinosaur objects, we'll only consider the ID member
	 * and nothing else.
	 * 
	 * (this is to simplify tests; in your own implementations
	 * later in life, you may wish to do something more complex)
	 */
	bool Dinosaur::operator>(const Dinosaur& other)
	{
		// TxODO: Your code here
		if (id_ > other.id_){
			return true;
		}
		return false;
	}
	
	/**
	 * Greater-than-or-equal comparison operator.
	 * Again, with all Dinosaur comparison operators
	 * in this project, we'll only consider the ID
	 */
	bool Dinosaur::operator>=(const Dinosaur& other)
	{
		// TxODO: Your code here
		if (id_ >= other.id_){
			return true;
		}
		return false;
	}
	
	///	Less-than comparison operator
	bool Dinosaur::operator<(const Dinosaur& other)
	{
		// TxODO: Your code here
		
		if (id_ < other.id_){
			return true;
		}
		return false;
	}
	
	///	Less-than-or-equal comparison operator
	bool Dinosaur::operator<=(const Dinosaur& other)
	{
		// TOxDO: Your code here
		
		if (id_ <= other.id_){
			return true;
		}
		return false;
	}
	
	/********************************************
	 * Begin self-explanatory getters and setters
	 *******************************************/
	void Dinosaur::setID(size_t id)
	{
		// TxODO: Your code here
		id_ = id;
	}
	
	size_t Dinosaur::getID()
	{
		// TxODO: Your code here
		
		return id_;
	}
	
	void Dinosaur::setName(string s)
	{
		// TxODO: Your code here
		name_ = s;
	}
	
	string Dinosaur::getName()
	{
		// TxODO: Your code here
		
		return name_;
	}
	
	void Dinosaur::setDiet(string s)
	{
		// TxODO: Your code here
		diet_ = s;
	}
	string Dinosaur::getDiet()
	{
		// TxODO: Your code here
		
		return diet_;
	}
	
	void Dinosaur::setPeriod(string s)
	{
		// TxODO: Your code here
		period_ = s;
	}
	string Dinosaur::getPeriod()
	{
		// TOxDO: Your code here
		
		return period_;
	}
	
	void Dinosaur::setLivedIn(string s)
	{
		// TxODO: Your code here
		lived_in_ = s;
	}
	string Dinosaur::getLivedIn()
	{
		// TxODO: Your code here
		
		return lived_in_;
	}
	
	void Dinosaur::setType(string s)
	{
		// TxODO: Your code here
		type_ = s;
	}
	string Dinosaur::getType()
	{
		// TxODO: Your code here
		
		return type_;
	}
	
	void Dinosaur::setLength(std::string s)
	{
		// TxODO: Your code here
		length_ = s;
	}
	std::string Dinosaur::getLength()
	{
		// TxODO: Your code here
		
		return length_;
	}
	
	void Dinosaur::setTaxonomy(std::string s)
	{
		// TOxDO: Your code here
		taxonomy_ = s;
	}
	std::string Dinosaur::getTaxonomy()
	{
		// TOxDO: Your code here
		
		return taxonomy_;
	}
	
	void Dinosaur::setNamedBy(std::string s)
	{
		// TOxDO: Your code here
		named_by_ = s;
	}
	std::string Dinosaur::getNamedBy()
	{
		// TODxO: Your code here
		
		return named_by_;
	}
	
	void Dinosaur::setSpecies(std::string s)
	{
		// TODxO: Your code here
		species_ = s;
	}
	std::string Dinosaur::getSpecies()
	{
		// TODxO: Your code here
		
		return species_;
	}
	
	void Dinosaur::setLink(std::string s)
	{
		// TODxO: Your code here
		link_ = s;
	}
	std::string Dinosaur::getLink()
	{
		// TOxDO: Your code here
		
		return link_;
	}
	
	///	YOUR WELCOME
	string Dinosaur::toString()
	{
		std::stringstream ss;
		
		//
		ss
			<< "*** Dinosaur ***" << endl
			<< "> ID: " << std::to_string(this->id_) << endl
			<< "> Name: " << this->name_ << endl
			<< "> Diet: " << this->diet_ << endl
			<< "> Period: " << this->period_ << endl
			<< "> Lived in: " << this->lived_in_ << endl
			<< "> Type: " << this->type_ << endl
			<< "> Length: " << this->length_ << endl
			<< "> Taxonomy: " << this->taxonomy_ << endl
			<< "> Named by: " << this->named_by_ << endl
			<< "> Species: " << this->species_ << endl
			<< "> Link: " << this->link_ << endl
			;
		
		return ss.str();
	}
}

