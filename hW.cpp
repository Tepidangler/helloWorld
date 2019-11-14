#include <iostream>
#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/button.hpp>

int main()
{
	using namespace nana;

	//Define a form
	form fm;

	//Define window_size, set set_min_size to false and set set_max_size to true
	const size WINDOW_SIZE = { 200,100 };
	constexpr bool set_min_size = false;
	constexpr bool set_max_size = true;

	//Define a  label and display a text.
	label lab(fm, rectangle(20, 20, 150, 30));
	lab.caption("What up doe World!");
	lab.format(true);

	//Define a button and answer the click event
	button btn(fm, rectangle(20, 40, 150, 30));
	btn.caption("Quit");
	btn.events().click(API::exit);

	//Layout management
	fm.size(WINDOW_SIZE);
	API::track_window_size(fm, WINDOW_SIZE, set_min_size);
	API::track_window_size(fm, WINDOW_SIZE, set_max_size);

	//Show the form
	fm.show();

	//Start the event loop process, it blocks until the form is closed
	exec();
}

			
