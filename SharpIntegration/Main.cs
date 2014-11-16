using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SharpIntegration
{
	public partial class Main : Form
	{
		public Main()
		{
			InitializeComponent();
		}

		private void button1_Click(object sender, EventArgs e)
		{
			int value;

			try
			{
				value = Int32.Parse(resultBox.Text);
			} catch(Exception eek) {
				// User couldn't insert good value 
				value = 42;
			}

			value = DynamicLibrary.doubleValue(value);

			resultBox.Text = "Result from c++:" + value;
		}
	}
}
