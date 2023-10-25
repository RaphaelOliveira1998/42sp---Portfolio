class Secretary : public Staff
{
private:

public:
	Form* createForm(FormType p_formType);
	void archiveForm();
};