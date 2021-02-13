//auther :olcay atabey

#ifndef COIN_MONEY.H



class Coin_money
{
public:
	Coin_money() {
		tam = 0;
		yarim = 0;
		ceyrek = 0;
		cash = 0;
		value_is_good = true;
	}
	Coin_money(int t, int y, int c)
	{
		tam=t;
		yarim = y;
		ceyrek = c;
		cash = compute_value();
		value_is_good = true;
	}

	~Coin_money() = default;

	//getter
	int get_yarim()const
	{
		return yarim;
	}
	int get_tam()const
	{
		return tam;
	}
	int get_ceyrek()const
	{
		return ceyrek;
	}
	double get_value()const
	{
		if (value_is_good)
			return cash;
		else 
		{
			cash = compute_value();
		    value_is_good = true;
		    return cash;
	    }

	}
	//setter
	int set_tam(int x)
	{
		return tam = x;
		value_is_good = false;
	}
	int set_yarim(int x)
	{
		return yarim = x;
		value_is_good = false;

	}
	int set_ceyrek(int x)
	{
		return ceyrek = x;
		value_is_good = false;

	}
	void print()
	{
		std::cout << "tam     : " << tam 
			   <<    "\nyarim   : " << yarim
			<<       "\nceyrek  : " << ceyrek << "\n Toplam parasi:"<<get_value();
	}
	friend Coin_money operator -(Coin_money m1, Coin_money m2);
	friend std::ostream &operator<<(std::ostream&os, Coin_money cm);
	 bool operator ==(Coin_money m)const
	{
		 return ((tam == m.tam) && (yarim == m.yarim) && (ceyrek == m.ceyrek));

	}
	 bool operator!=(Coin_money m)const
	 {
		 return ((tam != m.tam) || (yarim != m.yarim) || (ceyrek != m.ceyrek));
	 }
	 friend Coin_money operator +(Coin_money m1, Coin_money m2);
private:
	int tam;
	int yarim;
	int ceyrek;
	mutable double cash;
	mutable bool value_is_good;
	
	double compute_value()const
	{
		return (100*tam + 50 * yarim + 25 * ceyrek) / 100.;
	 }



};
Coin_money add(Coin_money m1, Coin_money m2)
{
	Coin_money sum;
	sum.set_tam(m1.get_tam() + m2.get_tam());
	sum.set_yarim(m1.get_yarim() + m2.get_yarim());
	sum.set_ceyrek(m1.get_ceyrek() + m2.get_ceyrek());

	return sum;
}
std::ostream &operator<<(std::ostream &os, Coin_money cm)
{
	os << "tam : " << cm.tam << "yarim : " << cm.yarim << "ceyrek : " << cm.ceyrek;
	return os;

}

Coin_money operator-(Coin_money m1, Coin_money m2)
{
	return Coin_money (m1.tam - m2.tam ,m1.yarim - m2.yarim , m1.ceyrek - m2.ceyrek);
}
Coin_money operator +(Coin_money m1, Coin_money m2)
{
	return Coin_money(m1.tam + m2.tam, m1.yarim + m2.yarim, m1.ceyrek + m2.ceyrek);
}

#endif // !COIN_MONEY.H
