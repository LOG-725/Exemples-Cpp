class Foo {
  virtual void doStuff();
};

class Bar : public Foo 
{
  // ok
  void doStuff() override;
  
  // ne compile pas
  void doStuff() const override;
};


class Foo 
{
   void doStuff() final;
};

class Bar : public Foo 
{
  // ne compile pas
  void doStuff() override;
};

