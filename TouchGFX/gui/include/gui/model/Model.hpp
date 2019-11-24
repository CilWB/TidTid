#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

/**
 * The Model class defines the data model in the model-view-presenter paradigm.
 * The Model is a singular object used across all presenters. The currently active
 * presenter will have a pointer to the Model through deriving from ModelListener.
 *
 * The Model will typically contain UI state information that must be kept alive
 * through screen transitions. It also usually provides the interface to the rest
 * of the system (the backend). As such, the Model can receive events and data from
 * the backend and inform the current presenter of such events through the modelListener
 * pointer, which is automatically configured to point to the current presenter.
 * Conversely, the current presenter can trigger events in the backend through the Model.
 */
class Model
{
public:
    Model();

    /**
     * Sets the modelListener to point to the currently active presenter. Called automatically
     * when switching screen.
     */
    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    /**
     * This function will be called automatically every frame. Can be used to e.g. sample hardware
     * peripherals or read events from the surrounding system and inject events to the GUI through
     * the ModelListener interface.
     */
    void tick();
		void setCLK();
		void updateTime();
		
		int getC();
		int getSec_();
		int getMin_();
		int getHour_();
		int getDay_();
		int getDate_();
		int getMonth_();
		int getYear_();
		int getTemp_();
		
protected:
    /**
     * Pointer to the currently active presenter.
     */
    ModelListener* modelListener;
		int c;

		static int sec_;
		static int min_;
		static int hour_;
		static int day_;
		static int date_;
		static int month_;
		static int year_;
		

};

#endif /* MODEL_HPP */
