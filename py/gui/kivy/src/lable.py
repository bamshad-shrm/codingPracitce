from kivy.app import App
from kivy.uix.gridlayout import GridLayout
from kivy.uix.label import Label
from kivy.uix.textinput import TextInput


class lables(GridLayout):

	def __init__(self, **kwargs):
		super(lables, self).__init__(**kwargs)
		#self.cols = 3
		self.rows = 3
		self.add_widget(Label(text='First Lable'))
		self.add_widget(Label(text='Second Lable'))
		self.add_widget(Label(text='Third Lable'))


class MyApp(App):

	def build(self):
		return lables()


if __name__ == '__main__':
		MyApp().run()
