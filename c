********student_data_dialog.xml ***  -d *******************


<?xml version="1.0" encoding="utf-8"?>
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="wrap_content"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    android:orientation="vertical"
    android:padding="16dp">

    <EditText
        android:id="@+id/editTextText4"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:inputType="text"
        android:hint="Name"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.497"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.17" />

    <EditText
        android:id="@+id/editTextText5"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:inputType="text"
        android:hint="Roll No"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.497"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.329" />

    <EditText
        android:id="@+id/editTextText6"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:inputType="text"
        android:hint="Marks"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent" />

    <Button
        android:id="@+id/button9"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Cancel"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.312"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.695" />

    <Button
        android:id="@+id/button10"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Submit"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.759"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.695" />
</LinearLayout>

*****activity_login.xml*****

<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:id="@+id/main"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".LoginActivity">

    <TextView
        android:id="@+id/textView"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Login"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.468"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.109" />

    <EditText
        android:id="@+id/editTextText"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:hint="Username"
        android:inputType="text"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.497"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.311" />

    <EditText
        android:id="@+id/editTextTextPassword"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:hint="Password"
        android:inputType="textPassword"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.497"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.453" />

    <EditText
        android:id="@+id/editTextText2"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:hint="Captcha"
        android:inputType="text"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.497"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.679" />

    <Button
        android:id="@+id/button"
        android:layout_width="88dp"
        android:layout_height="48dp"
        android:text="Login"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.468"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.786" />

    <Button
        android:id="@+id/button2"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Register"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.468"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.942" />

    <TextView
        android:id="@+id/textView5"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.461"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.561" />

</androidx.constraintlayout.widget.ConstraintLayout>

***activity_registeration.xml*************************************************************8

<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:id="@+id/main"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".LoginActivity">

    <TextView
        android:id="@+id/textView"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Login"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.468"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.109" />

    <EditText
        android:id="@+id/editTextText"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:hint="Username"
        android:inputType="text"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.497"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.311" />

    <EditText
        android:id="@+id/editTextTextPassword"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:hint="Password"
        android:inputType="textPassword"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.497"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.453" />

    <EditText
        android:id="@+id/editTextText2"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:hint="Captcha"
        android:inputType="text"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.497"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.679" />

    <Button
        android:id="@+id/button"
        android:layout_width="88dp"
        android:layout_height="48dp"
        android:text="Login"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.468"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.786" />

    <Button
        android:id="@+id/button2"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Register"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.468"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.942" />

    <TextView
        android:id="@+id/textView5"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.461"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.561" />

</androidx.constraintlayout.widget.ConstraintLayout>


*****activity_dashboard.xml****************************************************************************************


<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:id="@+id/main"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".DashboardActivity">

    <Button
        android:id="@+id/button4"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Insert"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.225"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.436" />

    <Button
        android:id="@+id/button5"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="View"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.806"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.436" />

    <Button
        android:id="@+id/button6"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Update"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.225"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.612" />

    <Button
        android:id="@+id/button7"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Delete"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.809"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.612" />

    <Button
        android:id="@+id/button8"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="View All"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.509"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.774" />

    <TextView
        android:id="@+id/textView3"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Dashboard"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.498"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.068" />

    <TextView
        android:id="@+id/textView4"
        android:layout_width="4dp"
        android:layout_height="11dp"
        android:text=""
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.484"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.255" />
</androidx.constraintlayout.widget.ConstraintLayout>
****Student***********************************************************************************
package com.example.labpractice

data class Student(val rollNo: String, val name: String, val marks: Int)
*****DBHelpher***********************************************************8


package com.example.labpractice

import android.content.ContentValues
import android.content.Context
import android.database.sqlite.SQLiteDatabase
import android.database.sqlite.SQLiteOpenHelper

class DBHelper(context: Context): SQLiteOpenHelper(context, DATABASE_NAME, null, DATABASE_VERSION){
    companion object{
        private const val DATABASE_NAME = "studentapp.db"
        private const val DATABASE_VERSION = 1

        private const val TABLE_USERS = "users"
        private const val TABLE_STUDENTS = "students"

        private const val COLUMN_USER_ID = "id"
        private const val COLUMN_USER_USERNAME = "username"
        private const val COLUMN_USER_PASSWORD = "password"

        private const val COLUMN_STUDENT_ID = "id"
        private const val COLUMN_STUDENT_ROLLNO = "rollno"
        private const val COLUMN_STUDENT_NAME = "name"
        private const val COLUMN_STUDENT_MARKS = "marks"
    }

    override fun onCreate(db: SQLiteDatabase) {
        val createUsersTable =  "CREATE TABLE $TABLE_USERS (" +
                "$COLUMN_USER_ID INTEGER PRIMARY KEY AUTOINCREMENT," +
                "$COLUMN_USER_USERNAME TEXT," +
                "$COLUMN_USER_PASSWORD TEXT)"
        db.execSQL(createUsersTable)

        val createStudentsTable = "CREATE TABLE $TABLE_STUDENTS (" +
                "$COLUMN_STUDENT_ID INTEGER PRIMARY KEY AUTOINCREMENT," +
                "$COLUMN_STUDENT_ROLLNO INTEGER," +
                "$COLUMN_STUDENT_NAME TEXT," +
                "$COLUMN_STUDENT_MARKS INTEGER)"
        db.execSQL(createStudentsTable)
    }

    override fun onUpgrade(db: SQLiteDatabase, oldVersion: Int, newVersion: Int) {
        // db.execSQL("DROP TABLE IF EXISTS $TABLE_USERS")
        db.execSQL("DROP TABLE IF EXISTS $TABLE_STUDENTS")
        onCreate(db)
    }

    fun registerUser(username: String, password: String): Long {
        val db = writableDatabase
        val values = ContentValues()
        values.put(COLUMN_USER_USERNAME, username)
        values.put(COLUMN_USER_PASSWORD, password)
        val result = db.insert(TABLE_USERS, null, values)
        db.close()
        return result
    }

    fun checkUser(username: String, password: String): Boolean {
        val columns = arrayOf(COLUMN_USER_ID)
        val db = readableDatabase
        val selection = "$COLUMN_USER_USERNAME = ? AND $COLUMN_USER_PASSWORD = ?"
        val selectionArgs = arrayOf(username, password)
        val cursor = db.query(TABLE_USERS, columns, selection, selectionArgs, null, null, null)
        val count = cursor.count
        cursor.close()
        db.close()
        return count > 0
    }

    fun insertStudent(rollno: String, name: String, marks: Int): Long {
        val db = writableDatabase
        val values = ContentValues()
        values.put(COLUMN_STUDENT_ROLLNO, rollno)
        values.put(COLUMN_STUDENT_NAME, name)
        values.put(COLUMN_STUDENT_MARKS, marks)
        val result = db.insert(TABLE_STUDENTS, null, values)
        db.close()
        return result
    }

    fun getStudent(rollno: String): Student? {
        val db = readableDatabase
        val selection = "$COLUMN_STUDENT_ROLLNO = ?"
        val selectionArgs = arrayOf(rollno)
        val cursor = db.query(TABLE_STUDENTS, null, selection, selectionArgs, null, null, null)

        var student: Student? = null
        if (cursor.moveToFirst()) {
            student = Student(cursor.getString(1), cursor.getString(2), cursor.getInt(3))
        }
        cursor.close()
        db.close()
        return student
    }

    fun updateStudent(rollno: String, name: String, marks: Int): Long {
        val db = writableDatabase
        val values = ContentValues()
        values.put(COLUMN_STUDENT_NAME, name)
        values.put(COLUMN_STUDENT_MARKS, marks)
        val selection = "$COLUMN_STUDENT_ROLLNO = ?"
        val selectionArgs = arrayOf(rollno)
        val result = db.update(TABLE_STUDENTS, values, selection, selectionArgs)
        db.close()
        return result.toLong()
    }

    fun deleteStudent(rollno: String): Long {
        val db = writableDatabase
        val selection = "$COLUMN_STUDENT_ROLLNO = ?"
        val selectionArgs = arrayOf(rollno)
        val result = db.delete(TABLE_STUDENTS, selection, selectionArgs)
        db.close()
        return result.toLong()
    }

    fun getAllStudents(): List<Student> {
        val studentsList = ArrayList<Student>()
        val db = readableDatabase
        val cursor = db.query(TABLE_STUDENTS, null, null, null, null, null, null)
        if (cursor.moveToFirst()) {
            do {
                val student = Student(cursor.getString(1), cursor.getString(2), cursor.getInt(3))
                studentsList.add(student)
            } while (cursor.moveToNext())
        }
        cursor.close()
        db.close()
        return studentsList
    }

}

****LoginActivity*******************************************************************************
package com.example.labpractice

import android.annotation.SuppressLint
import android.content.Intent
import android.os.Bundle
import android.widget.Button
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat

import android.widget.EditText
import android.widget.TextView
import android.widget.Toast
import java.util.Random

class LoginActivity : AppCompatActivity() {

    private lateinit var generatedCaptcha: String

    @SuppressLint("MissingInflatedId")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_login)

        val loginUsername: EditText = findViewById(R.id.editTextText)
        val loginPassword: EditText = findViewById(R.id.editTextTextPassword)
        val loginCaptcha: EditText = findViewById(R.id.editTextText2)
        val loginButton: Button = findViewById(R.id.button)
        val registerButton: Button = findViewById(R.id.button2)
        val loginCaptchaText: TextView = findViewById(R.id.textView5)
        val dbHelper: DBHelper

        dbHelper = DBHelper(this)

        generatedCaptcha = generateCaptcha()
        loginCaptchaText.text = generatedCaptcha

        // If needed you can add If not registered click here
        registerButton.setOnClickListener{
            val intent = Intent(this, RegistrationActivity::class.java)
            startActivity(intent)
        }

        // If not click here
        loginButton.setOnClickListener{
            val username = loginUsername.text.toString()
            val password = loginPassword.text.toString()
            val captcha = loginCaptcha.text.toString()
            if (username.isEmpty() || password.isEmpty() || captcha.isEmpty()) {
                Toast.makeText(this, "Please enter all values", Toast.LENGTH_SHORT).show()
            } else if (captcha != generatedCaptcha) {
                Toast.makeText(this, "Invalid Captcha", Toast.LENGTH_SHORT).show()
                generatedCaptcha = generateCaptcha()
                loginCaptcha.setText(generatedCaptcha)
            } else {
                val isUser = dbHelper.checkUser(username, password)
                if (isUser) {
                    Toast.makeText(this, "Login successful", Toast.LENGTH_SHORT).show()
                    val intent = Intent(this, DashboardActivity::class.java)
                    startActivity(intent)
                    finish()
                } else {
                    Toast.makeText(this, "Invalid username or password", Toast.LENGTH_SHORT).show()
                }
            }
        }

        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets
        }
    }

    private fun generateCaptcha(): String {
        val random = Random()
        val captcha = 10000 + random.nextInt(90000)
        return captcha.toString()
    }
}

**************RegistrationActivity*******************************************************************
package com.example.labpractice

import android.os.Bundle
import android.widget.EditText
import android.widget.Button
import android.widget.Toast
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat

class RegistrationActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_registration)

        val registerUsername: EditText = findViewById(R.id.editTextText3)
        val registerPassword: EditText = findViewById(R.id.editTextTextPassword2)
        val registerConfirmPassword: EditText = findViewById(R.id.editTextTextPassword3)
        val registerButton: Button = findViewById(R.id.button3)
        val dbHelper: DBHelper

        dbHelper = DBHelper(this)

        registerButton.setOnClickListener {
            val username = registerUsername.text.toString()
            val password = registerPassword.text.toString()
            val confirmPassword = registerConfirmPassword.text.toString()

            if (username.isEmpty() || password.isEmpty() || confirmPassword.isEmpty()) {
                Toast.makeText(this, "Please enter all values", Toast.LENGTH_SHORT).show()
            } else if (password != confirmPassword) {
                Toast.makeText(this, "Password does not match", Toast.LENGTH_SHORT).show()
            } else {
                val res = dbHelper.registerUser(username, password)
                if (res > 0) {
                    Toast.makeText(this, "Registration successful", Toast.LENGTH_SHORT).show()
                    finish()
                } else {
                    Toast.makeText(this, "Registration failed", Toast.LENGTH_SHORT).show()
                }
            }
        }

        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets
        }
    }
}

************DashboardActivity******************************************************************************************************
package com.example.labpractice

import android.annotation.SuppressLint
import android.os.Bundle
import android.view.LayoutInflater
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import android.widget.Toast
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AlertDialog
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.LayoutInflaterCompat
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat

class DashboardActivity : AppCompatActivity() {
    private lateinit var dbHelper: DBHelper
    private lateinit var studentTextView: TextView

    @SuppressLint("MissingInflatedId")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_dashboard)

        val insertButton: Button = findViewById(R.id.button4)
        val readButton: Button = findViewById(R.id.button5)
        val updateButton: Button = findViewById(R.id.button6)
        val deleteButton: Button = findViewById(R.id.button7)
        val viewAllButton: Button = findViewById(R.id.button8)
        val studentTextView: TextView = findViewById(R.id.textView4)

        dbHelper = DBHelper(this)

        insertButton.setOnClickListener{
            showStudentDialog("insert")
        }

        readButton.setOnClickListener{
            showStudentDialog("read")
        }

        updateButton.setOnClickListener {
            showStudentDialog("update")
        }

        deleteButton.setOnClickListener {
            showStudentDialog("delete")
        }

        viewAllButton.setOnClickListener{
            val studentList = dbHelper.getAllStudents()
            if(studentList.isNotEmpty()){
                val sb = StringBuilder()
                for (student in studentList) {
                    sb.append("RollNo: ${student.rollNo}, Name: ${student.name}, Marks: ${student.marks}\n")
                }
                studentTextView.text = sb.toString()
            } else {
                Toast.makeText(this, "No student data found", Toast.LENGTH_SHORT).show()
                studentTextView.text = ""
            }
        }

        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets
        }
    }

    @SuppressLint("SetTextI18n")
    private fun showStudentDialog(operation: String) {
        val builder = AlertDialog.Builder(this)
        val layoutInflater = LayoutInflater.from(this)
        val dialogView = layoutInflater.inflate(R.layout.student_data_dialog, null)
        builder.setView(dialogView)

        val rollnoEditText: EditText = dialogView.findViewById(R.id.editTextText4)
        val nameEditText: EditText = dialogView.findViewById(R.id.editTextText5)
        val marksEditText: EditText = dialogView.findViewById(R.id.editTextText6)
        val cancelButton: Button = dialogView.findViewById(R.id.button9)
        val submitButton: Button = dialogView.findViewById(R.id.button10)

        val alertDialog = builder.create()

        cancelButton.setOnClickListener {
            alertDialog.dismiss()
        }

        submitButton.setOnClickListener {
            val rollnoText = rollnoEditText.text.toString()
            val nameText = nameEditText.text.toString()
            val marksText = marksEditText.text.toString()

            if (rollnoText.isEmpty() || nameText.isEmpty() || marksText.isEmpty()) {
                Toast.makeText(this, "Please enter all values", Toast.LENGTH_SHORT).show()
            } else {
                try{
                    val rollno = rollnoText
                    val name = nameText
                    val marks = marksText.toInt()
                    var result: Long = -1

                    if (operation == "insert") {
                        result = dbHelper.insertStudent(rollno, name, marks)
                    } else if (operation == "read") {
                        val student = dbHelper.getStudent(rollno)
                        if (student != null) {
                            studentTextView.text = "RollNo: ${student.rollNo}, Name: ${student.name}, Marks: ${student.marks}"
                        } else {
                            Toast.makeText(this, "Student not found", Toast.LENGTH_SHORT).show()
                            studentTextView.text = ""
                        }
                    } else if (operation == "update") {
                        result = dbHelper.updateStudent(rollno, name, marks)
                    } else if (operation == "delete") {
                        result = dbHelper.deleteStudent(rollno)
                    }
                    if (operation == "insert" || operation == "update" || operation == "delete") {
                        if (result > 0) {
                            Toast.makeText(this, "Operation successful", Toast.LENGTH_SHORT).show()
                        } else {
                            Toast.makeText(this, "Operation failed", Toast.LENGTH_SHORT).show()
                        }
                    }
                    alertDialog.dismiss()
                } catch(e: NumberFormatException) {
                    Toast.makeText(this, "Invalid number format. Please enter a valid number", Toast.LENGTH_SHORT).show()
                }
            }

        }
        alertDialog.show()
    }
}

****************/DBHelper.kt - V *************************

package com.example.studentdetaildb

import android.content.ContentValues
import android.content.Context
import android.database.Cursor
import android.database.sqlite.SQLiteDatabase
import android.database.sqlite.SQLiteOpenHelper

class DBHelper(context: Context) : SQLiteOpenHelper(context, DATABASE_NAME, null, DATABASE_VERSION) {

    companion object {
        private const val DATABASE_NAME = "student.db"
        private const val DATABASE_VERSION = 1
        private const val TABLE_NAME = "students"
        private const val COLUMN_ID = "id"
        private const val COLUMN_NAME = "name"
        private const val COLUMN_ROLL = "roll"
        private const val COLUMN_MARKS = "marks"

        private const val CREATE_TABLE = "CREATE TABLE $TABLE_NAME (" +
                "$COLUMN_ID INTEGER PRIMARY KEY AUTOINCREMENT, " +
                "$COLUMN_NAME TEXT, " +
                "$COLUMN_ROLL TEXT, " +
                "$COLUMN_MARKS TEXT)"
    }

    override fun onCreate(db: SQLiteDatabase) {
        db.execSQL(CREATE_TABLE)
    }

    override fun onUpgrade(db: SQLiteDatabase, oldVersion: Int, newVersion: Int) {
        db.execSQL("DROP TABLE IF EXISTS $TABLE_NAME")
        onCreate(db)
    }

    // Insert data
    fun insertStudent(name: String, roll: String, marks: String) {
        val db = this.writableDatabase
        val values = ContentValues().apply {
            put(COLUMN_NAME, name)
            put(COLUMN_ROLL, roll)
            put(COLUMN_MARKS, marks)
        }
        db.insert(TABLE_NAME, null, values)
        db.close()
    }


    // Update student details by roll number
    fun updateStudent(roll: String, name: String, marks: String) {
        val db = this.writableDatabase
        val values = ContentValues().apply {
            put(COLUMN_NAME, name)
            put(COLUMN_MARKS, marks)
        }
        db.update(TABLE_NAME, values, "$COLUMN_ROLL = ?", arrayOf(roll))
        db.close()
    }

    // Delete data
    fun deleteStudent(id: String) {
        val db = this.writableDatabase
        db.delete(TABLE_NAME, "$COLUMN_ROLL = ?", arrayOf(id))
        db.close()
    }

    // Retrieve all students
    fun getAllStudents(): List<Student> {
        val students = mutableListOf<Student>()
        val db = this.readableDatabase
        val cursor: Cursor = db.rawQuery("SELECT * FROM $TABLE_NAME", null)

        if (cursor.moveToFirst()) {
            do {
                val student = Student(
                    id = cursor.getInt(cursor.getColumnIndex(COLUMN_ID)),
                    name = cursor.getString(cursor.getColumnIndex(COLUMN_NAME)),
                    roll = cursor.getString(cursor.getColumnIndex(COLUMN_ROLL)),
                    marks = cursor.getString(cursor.getColumnIndex(COLUMN_MARKS))
                )
                students.add(student)
            } while (cursor.moveToNext())
        }
        cursor.close()
        db.close()
        return students
    }

    // Retrieve a student by roll number
    fun getStudent(roll: String): Student? {
        val db = this.readableDatabase
        val cursor: Cursor = db.query(
            TABLE_NAME,
            null,
            "$COLUMN_ROLL = ?",
            arrayOf(roll),
            null,
            null,
            null
        )
        var student: Student? = null
        if (cursor.moveToFirst()) {
            student = Student(
                id = cursor.getInt(cursor.getColumnIndex(COLUMN_ID)),
                name = cursor.getString(cursor.getColumnIndex(COLUMN_NAME)),
                roll = cursor.getString(cursor.getColumnIndex(COLUMN_ROLL)),
                marks = cursor.getString(cursor.getColumnIndex(COLUMN_MARKS))
            )
        }
        cursor.close()
        db.close()
        return student
    }

}

// Data class for Student
data class Student(
    val id: Int,
    val name: String,
    val roll: String,
    val marks: String
)


***************/MainActivity.kt - V **************************************

package com.example.studentdetaildb

import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat

class MainActivity : AppCompatActivity() {

    private lateinit var dbHelper: DBHelper
    private lateinit var editTextName: EditText
    private lateinit var editTextRoll: EditText
    private lateinit var editTextMarks: EditText
    private lateinit var buttonInsert: Button
    private lateinit var buttonViewAll: Button
    private lateinit var textViewResult: TextView
    private lateinit var buttonView: Button
    private lateinit var buttonDelete: Button
    private lateinit var buttonUpdate: Button

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets
        }
        getDrawable()
        dbHelper = DBHelper(this)
        editTextName = findViewById(R.id.editTextText3)
        editTextRoll = findViewById(R.id.editTextText)
        editTextMarks = findViewById(R.id.editTextText4)
        buttonInsert = findViewById(R.id.button5)
        buttonViewAll = findViewById(R.id.button4)
        buttonView = findViewById(R.id.button)
        buttonDelete = findViewById(R.id.button2)
        buttonUpdate = findViewById(R.id.button3)
        textViewResult = findViewById(R.id.textViewResult)
        buttonInsert.setOnClickListener {
            val name = editTextName.text.toString()
            val roll = editTextRoll.text.toString()
            val marks = editTextMarks.text.toString()
            dbHelper.insertStudent(name, roll, marks)

            editTextName.text.clear()
            editTextRoll.text.clear()
            editTextMarks.text.clear()
        }
        buttonViewAll.setOnClickListener {
            val students = dbHelper.getAllStudents()
            textViewResult.text =
                students.joinToString("\n") { "${it.name} - ${it.roll} - ${it.marks}" }
        }
        buttonView.setOnClickListener{
            val roll = editTextRoll.text.toString()
            val student = dbHelper.getStudent(roll)
            if (student != null) {
                textViewResult.text = "Name: ${student.name}, Roll: ${student.roll}, Marks: ${student.marks}"
            } else {
                textViewResult.text = "Student not found"
            }
            editTextRoll.text.clear()
        }
        buttonDelete.setOnClickListener {
            val roll = editTextRoll.text.toString()
            dbHelper.deleteStudent(roll)
            textViewResult.text = "Student with Roll No $roll deleted."
            editTextRoll.text.clear() // Clear the delete field after deletion
        }
        buttonUpdate.setOnClickListener {
            val roll = editTextRoll.text.toString()
            val name = editTextName.text.toString()
            val marks = editTextMarks.text.toString()
            dbHelper.updateStudent(roll, name, marks)
            // Clear update fields
            editTextRoll.text.clear()
            editTextName.text.clear()
            editTextMarks.text.clear()
            textViewResult.text = "Student with Roll No $roll updated."

        }
    }
}

*****MainActiviy.kt  MENUBAR ****


package com.example.menudrag

import android.graphics.Color
import android.os.Bundle
import android.view.Menu
import android.view.MenuItem
import android.view.View
import android.widget.Button
import android.widget.PopupMenu
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.Toolbar
import kotlin.random.Random

class MainActivity : AppCompatActivity() {

    private lateinit var formatButton: Button
    private lateinit var textView: TextView

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // Initialize the Toolbar and set it as the ActionBar
        val toolbar: Toolbar = findViewById(R.id.toolbar)
        setSupportActionBar(toolbar)

        // Initialize views
        formatButton = findViewById(R.id.formatButton)
        textView = findViewById(R.id.textView)

        // Set click listener for the format button to show the popup menu
        formatButton.setOnClickListener { showPopupMenu(it) }
    }

    private fun showPopupMenu(view: View) {
        val popupMenu = PopupMenu(this, view)
        popupMenu.menuInflater.inflate(R.menu.popup_menu, popupMenu.menu)

        popupMenu.setOnMenuItemClickListener { item: MenuItem ->
            when (item.itemId) {
                R.id.small -> changeTextSize(R.dimen.text_size_small)
                R.id.medium -> changeTextSize(R.dimen.text_size_medium)
                R.id.large -> changeTextSize(R.dimen.text_size_large)
                R.id.change_color -> changeTextColor()
            }
            true
        }
        popupMenu.show()
    }

    private fun changeTextSize(sizeId: Int) {
        val size = resources.getDimension(sizeId)
        textView.textSize = size / resources.displayMetrics.scaledDensity // Convert to sp
    }

    private fun changeTextColor() {
        val randomColor = Color.rgb(Random.nextInt(256), Random.nextInt(256), Random.nextInt(256))
        textView.setTextColor(randomColor)
    }

    override fun onCreateOptionsMenu(menu: Menu): Boolean {
        menuInflater.inflate(R.menu.options_menu, menu)
        return true
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        return when (item.itemId) {
            R.id.color_red -> {
                findViewById<View>(android.R.id.content).setBackgroundColor(resources.getColor(R.color.red))
                true
            }
            R.id.color_green -> {
                findViewById<View>(android.R.id.content).setBackgroundColor(resources.getColor(R.color.green))
                true
            }
            R.id.color_blue -> {
                findViewById<View>(android.R.id.content).setBackgroundColor(resources.getColor(R.color.blue))
                true
            }
            else -> super.onOptionsItemSelected(item)
        }
    }
}

******Rating Bar - dynamic text view - linear layout *******

ratingBar = findViewById(R.id.ratingBar)
        messageEditText = findViewById(R.id.messageEditText)
        sendButton = findViewById(R.id.sendButton)
        feedbackContainer = findViewById(R.id.feedbackContainer) // LinearLayout to hold dynamic TextViews

        // Set up RatingBar listener to create a new TextView for each rating
        ratingBar.onRatingBarChangeListener = RatingBar.OnRatingBarChangeListener { _, rating, _ ->
            val message = when (rating.toInt()) {
                5 -> "Awesome. I love it"
                4 -> "Good. Enjoyed it"
                3 -> "Satisfied."
                2 -> "Not good. Need improvement"
                1 -> "Disappointed. Very poor"
                else -> ""
            }
            createFeedbackTextView(message) // Create and add TextView for the rating message

            // Clear previous input and focus on input field
            messageEditText.text.clear()
            messageEditText.requestFocus()
        }

        // Set up send button listener
        sendButton.setOnClickListener {
            val feedbackMessage = messageEditText.text.toString()
            val intent2 = Intent(Intent.ACTION_VIEW)
            intent2.setData(Uri.parse("https://www.psgtech.edu"))
            startActivity(intent2)
//            val intent = Intent(this, MainActivity2::class.java)
//            intent.putExtra("feedback",feedbackMessage)
//            startActivity(intent)

        }
    }

    private fun createFeedbackTextView(message: String) {
        var checkVal = findViewById<TextView>(R.id.dynamic_text_view_id)
        if(checkVal==null){
            val textView = TextView(this).apply {
                id = R.id.dynamic_text_view_id
                text = message
                textSize = 16f // Set text size, adjust as needed
                setPadding(16, 16, 16, 16) // Add padding for better appearance
            }

            // Find the index of the RatingBar in the feedbackContainer
            val ratingBarIndex = feedbackContainer.indexOfChild(findViewById<RatingBar>(R.id.ratingBar))

            // Insert the new TextView after the RatingBar
            feedbackContainer.addView(textView, ratingBarIndex + 1)
        }
        else{

            if (checkVal != null) {
                if (message==""){
                    feedbackContainer.removeView(checkVal)
                }
                else{
                    checkVal.text = message
                }

            }
        }

*****MainActiviy.kt  MENUBAR ****


package com.example.menudrag

import android.graphics.Color
import android.os.Bundle
import android.view.Menu
import android.view.MenuItem
import android.view.View
import android.widget.Button
import android.widget.PopupMenu
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.Toolbar
import kotlin.random.Random

class MainActivity : AppCompatActivity() {

    private lateinit var formatButton: Button
    private lateinit var textView: TextView

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // Initialize the Toolbar and set it as the ActionBar
        val toolbar: Toolbar = findViewById(R.id.toolbar)
        setSupportActionBar(toolbar)

        // Initialize views
        formatButton = findViewById(R.id.formatButton)
        textView = findViewById(R.id.textView)

        // Set click listener for the format button to show the popup menu
        formatButton.setOnClickListener { showPopupMenu(it) }
    }

    private fun showPopupMenu(view: View) {
        val popupMenu = PopupMenu(this, view)
        popupMenu.menuInflater.inflate(R.menu.popup_menu, popupMenu.menu)

        popupMenu.setOnMenuItemClickListener { item: MenuItem ->
            when (item.itemId) {
                R.id.small -> changeTextSize(R.dimen.text_size_small)
                R.id.medium -> changeTextSize(R.dimen.text_size_medium)
                R.id.large -> changeTextSize(R.dimen.text_size_large)
                R.id.change_color -> changeTextColor()
            }
            true
        }
        popupMenu.show()
    }

    private fun changeTextSize(sizeId: Int) {
        val size = resources.getDimension(sizeId)
        textView.textSize = size / resources.displayMetrics.scaledDensity // Convert to sp
    }

    private fun changeTextColor() {
        val randomColor = Color.rgb(Random.nextInt(256), Random.nextInt(256), Random.nextInt(256))
        textView.setTextColor(randomColor)
    }

    override fun onCreateOptionsMenu(menu: Menu): Boolean {
        menuInflater.inflate(R.menu.options_menu, menu)
        return true
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        return when (item.itemId) {
            R.id.color_red -> {
                findViewById<View>(android.R.id.content).setBackgroundColor(resources.getColor(R.color.red))
                true
            }
            R.id.color_green -> {
                findViewById<View>(android.R.id.content).setBackgroundColor(resources.getColor(R.color.green))
                true
            }
            R.id.color_blue -> {
                findViewById<View>(android.R.id.content).setBackgroundColor(resources.getColor(R.color.blue))
                true
            }
            else -> super.onOptionsItemSelected(item)
        }
    }
}

******Rating Bar - dynamic text view - linear layout *******

ratingBar = findViewById(R.id.ratingBar)
        messageEditText = findViewById(R.id.messageEditText)
        sendButton = findViewById(R.id.sendButton)
        feedbackContainer = findViewById(R.id.feedbackContainer) // LinearLayout to hold dynamic TextViews

        // Set up RatingBar listener to create a new TextView for each rating
        ratingBar.onRatingBarChangeListener = RatingBar.OnRatingBarChangeListener { _, rating, _ ->
            val message = when (rating.toInt()) {
                5 -> "Awesome. I love it"
                4 -> "Good. Enjoyed it"
                3 -> "Satisfied."
                2 -> "Not good. Need improvement"
                1 -> "Disappointed. Very poor"
                else -> ""
            }
            createFeedbackTextView(message) // Create and add TextView for the rating message

            // Clear previous input and focus on input field
            messageEditText.text.clear()
            messageEditText.requestFocus()
        }

        // Set up send button listener
        sendButton.setOnClickListener {
            val feedbackMessage = messageEditText.text.toString()
            val intent2 = Intent(Intent.ACTION_VIEW)
            intent2.setData(Uri.parse("https://www.psgtech.edu"))
            startActivity(intent2)
//            val intent = Intent(this, MainActivity2::class.java)
//            intent.putExtra("feedback",feedbackMessage)
//            startActivity(intent)

        }
    }

    private fun createFeedbackTextView(message: String) {
        var checkVal = findViewById<TextView>(R.id.dynamic_text_view_id)
        if(checkVal==null){
            val textView = TextView(this).apply {
                id = R.id.dynamic_text_view_id
                text = message
                textSize = 16f // Set text size, adjust as needed
                setPadding(16, 16, 16, 16) // Add padding for better appearance
            }

            // Find the index of the RatingBar in the feedbackContainer
            val ratingBarIndex = feedbackContainer.indexOfChild(findViewById<RatingBar>(R.id.ratingBar))

            // Insert the new TextView after the RatingBar
            feedbackContainer.addView(textView, ratingBarIndex + 1)
        }
        else{

            if (checkVal != null) {
                if (message==""){
                    feedbackContainer.removeView(checkVal)
                }
                else{
                    checkVal.text = message
                }

            }
        }

******************************** Shared Prefence LAYOUT 1 - S *******************************************
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:id="@+id/main"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">

    <EditText
        android:id="@+id/FirsteditText"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:inputType="text"
        android:hint="First Name"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.497"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.109" />

    <EditText
        android:id="@+id/LasteditText"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:hint="Last Name"
        android:inputType="text"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.497"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.204" />

    <EditText
        android:id="@+id/mobeditText"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:hint="Mobile Number"
        android:inputType="number"
        android:maxLength="10"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.497"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.297" />

    <!--on below line we are creating
        edit text for passing data-->

    <LinearLayout
        android:id="@+id/linearLayout2"
        android:layout_width="327dp"
        android:layout_height="55dp"
        android:gravity="center"
        android:orientation="horizontal"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.39">

        <ImageView
            android:id="@+id/imageView"
            android:layout_width="0dp"
            android:layout_height="wrap_content"
            android:layout_margin="8dp"
            android:layout_weight="1"
            app:srcCompat="@drawable/cake" />

        <EditText
            android:id="@+id/idEdtDate"
            android:layout_width="0dp"
            android:layout_height="wrap_content"
            android:layout_margin="8dp"
            android:layout_weight="3"
            android:clickable="false"
            android:cursorVisible="false"
            android:focusable="false"
            android:focusableInTouchMode="false"
            android:hint="Enter date" />
    </LinearLayout>

    <LinearLayout
        android:id="@+id/linearLayout"
        android:layout_width="303dp"
        android:layout_height="93dp"
        android:orientation="vertical"
        android:padding="16dp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.532">

        <TextView
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:paddingBottom="8dp"
            android:text="Select Gender"
            android:textSize="18sp" />

        <Spinner
            android:id="@+id/genderSpinner"
            android:layout_width="match_parent"
            android:layout_height="wrap_content" />
    </LinearLayout>

    <LinearLayout
        android:id="@+id/linearLayout3"
        android:layout_width="293dp"
        android:layout_height="146dp"
        android:orientation="vertical"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.542"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.758">

        <TextView
            android:id="@+id/textView2"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:layout_margin="8dp"
            android:layout_weight="1"
            android:text="Address" />

        <EditText
            android:id="@+id/editTextText3"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:layout_margin="8dp"
            android:layout_weight="3"
            android:ems="10"
            android:inputType="text"
            android:hint="First Line" />

        <EditText
            android:id="@+id/editTextText4"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:layout_margin="8dp"
            android:layout_weight="3"
            android:ems="10"
            android:inputType="text"
            android:hint="Second Line" />
    </LinearLayout>

    <Button
        android:id="@+id/button"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Save"
        android:pointerIcon="hand"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.919" />


</androidx.constraintlayout.widget.ConstraintLayout>

***************************************** SharedP refence layout 2 - S ***************************************

<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent">

    <LinearLayout
        android:layout_width="249dp"
        android:layout_height="200dp"
        android:gravity="center"
        android:orientation="horizontal"
        android:padding="16dp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        tools:layout_editor_absoluteX="81dp"
        tools:layout_editor_absoluteY="265dp">

        <Button
            android:id="@+id/button2"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:layout_marginEnd="8dp"
            android:text="Confirm" />

        <Button
            android:id="@+id/button3"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:layout_marginStart="8dp"
            android:text="Edit" />
    </LinearLayout>
</androidx.constraintlayout.widget.ConstraintLayout>

********************************************* Shared PRef layout 3 -S **************************************************

<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent">

    <TextView
        android:id="@+id/textView"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Hello"
        android:textStyle="bold"
        android:textSize="30dp"
        android:textColor="@color/black"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.498"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.241" />

    <Button
        android:id="@+id/button4"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Go home"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.613" />
</androidx.constraintlayout.widget.ConstraintLayout>


8******************************************** Shared KT file 1 - S **************************************
package com.example.app_6

import android.os.Bundle
import androidx.activity.enableEdgeToEdge
import android.app.DatePickerDialog
import android.content.Intent
import android.widget.ArrayAdapter
import android.widget.Button
import android.widget.EditText
import android.widget.Spinner
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import java.util.*

class MainActivity : AppCompatActivity() {
    lateinit var dateEdt: EditText

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)

        val spinner = findViewById<Spinner>(R.id.genderSpinner)
        val genders = arrayOf("Choose gender", "Male", "Female", "Others", "Prefer not to say")
        val adapter = ArrayAdapter(this, android.R.layout.simple_spinner_dropdown_item, genders)
        spinner.adapter = adapter

        val f = findViewById<EditText>(R.id.FirsteditText)
        val l = findViewById<EditText>(R.id.LasteditText)
        val mob = findViewById<EditText>(R.id.mobeditText)
        val add_f = findViewById<EditText>(R.id.editTextText3)
        val add_s = findViewById<EditText>(R.id.editTextText4)
        dateEdt = findViewById(R.id.idEdtDate)
        val but = findViewById<Button>(R.id.button)

        // Load data from shared preferences if it exists
        val sharedPreferences = getSharedPreferences("UserDetails", MODE_PRIVATE)
        if (sharedPreferences.contains("firstName")) {
            f.setText(sharedPreferences.getString("firstName", ""))
            l.setText(sharedPreferences.getString("lastName", ""))
            val gender = sharedPreferences.getString("gender", "Choose gender")
            val genderPosition = adapter.getPosition(gender)
            spinner.setSelection(genderPosition)
            mob.setText(sharedPreferences.getString("mobile", ""))
            add_f.setText(sharedPreferences.getString("addressFirst", ""))
            add_s.setText(sharedPreferences.getString("addressSecond", ""))
            val year = sharedPreferences.getInt("year", 0)
            val month = sharedPreferences.getInt("month", 0)
            val day = sharedPreferences.getInt("day", 0)
            if (year != 0 && month + 1 != 0 && day != 0) {
                val formattedDate = String.format(getString(R.string.date_format), day, (month+ 1), year)
                dateEdt.setText(formattedDate)
            }
        }

        val editor = sharedPreferences.edit()

        but.setOnClickListener {
            val intent = Intent(this, SecondActivity::class.java)

            editor.putString("firstName", f.text.toString())
            editor.putString("lastName", l.text.toString())
            editor.putString("gender", spinner.selectedItem.toString())
            editor.putString("mobile", mob.text.toString())
            editor.putString("addressFirst", add_f.text.toString())
            editor.putString("addressSecond", add_s.text.toString())
            editor.apply()

            if(spinner.selectedItem.toString() != "Choose gender" && f.text.toString() != "" && l.text.toString() != "" && mob.text.toString().length == 10 && add_f.text.toString() != "" && add_s.text.toString() != "")
            {
                startActivity(intent)
            }
            else{
                Toast.makeText(this, "Fill the fields properly", Toast.LENGTH_SHORT).show()
            }
        }

        // Date picker dialog and setting date in EditText
        dateEdt.setOnClickListener {
            val c = Calendar.getInstance()
            val year = c.get(Calendar.YEAR)
            val month = c.get(Calendar.MONTH)
            val day = c.get(Calendar.DAY_OF_MONTH)

            val datePickerDialog = DatePickerDialog(
                this,
                { _, year, monthOfYear, dayOfMonth ->
                    val formattedDate = String.format(getString(R.string.date_format), dayOfMonth, (monthOfYear + 1), year)
                    dateEdt.setText(formattedDate)
                    editor.putInt("year", year)
                    editor.putInt("month", monthOfYear) // Correct monthOfYear
                    editor.putInt("day", dayOfMonth) // Correct dayOfMonth
                    editor.apply()
                },
                year, month, day
            )
            datePickerDialog.show()
        }
    }
}


****************************************** Shared Prefernce KT 2 file -S ****************************************************
package com.example.app_6

import android.content.Intent
import android.os.Bundle
import android.widget.Button
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity

class SecondActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.second_activity)

        val cnf = findViewById<Button>(R.id.button2)
        val edit = findViewById<Button>(R.id.button3)

        val sharedPreferences = getSharedPreferences("UserDetails", MODE_PRIVATE)

        val firstName = sharedPreferences.getString("firstName", "")
        val lastName = sharedPreferences.getString("lastName", "")
        val gender = sharedPreferences.getString("gender", "")
        val mobile = sharedPreferences.getString("mobile", "")
        val addressFirst = sharedPreferences.getString("addressFirst", "")
        val addressSecond = sharedPreferences.getString("addressSecond", "")
        val year = sharedPreferences.getInt("year", 0)
        val month = sharedPreferences.getInt("month", 0)
        val day = sharedPreferences.getInt("day", 0)


        edit.setOnClickListener {
            val intent1 = Intent(this, MainActivity::class.java).apply{
                putExtra("firstName", firstName)
                putExtra("lastName", lastName)
                putExtra("gender", gender)
                putExtra("mobile", mobile)
                putExtra("addressFirst", addressFirst)
                putExtra("addressSecond", addressSecond)
                putExtra("year", year)
                putExtra("month", month)
                putExtra("day", day)
            }

            startActivity(intent1)
        }

        cnf.setOnClickListener {
            val intent2 = Intent(this,ThirdActivity::class.java)
            startActivity(intent2)
        }
    }
}	




******************************************* DB Connection Activitu Layout - S ********************************************
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:id="@+id/main"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">

    <Button
        android:id="@+id/button4"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="View All"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.496"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.756" />

    <Button
        android:id="@+id/button2"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Delete"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.689"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.508" />

    <EditText
        android:id="@+id/editTextText4"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:hint="Marks"
        android:inputType="text"
        android:textSize="16sp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.691"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.375" />

    <TextView
        android:id="@+id/textView3"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Enter Marks:"
        android:textSize="16sp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.17"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.393" />

    <Button
        android:id="@+id/button"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="View"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.687"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.62" />

    <Button
        android:id="@+id/button5"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Insert"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.256"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.508" />

    <Button
        android:id="@+id/button3"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Update"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.258"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.62" />

    <TextView
        android:id="@+id/textView2"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Enter Roll:"
        android:textSize="16sp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.208"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.227" />

    <TextView
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="STUDENT DETAILS"
        android:textSize="34sp"
        android:textStyle="bold"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.088" />

    <TextView
        android:id="@+id/textView"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Enter Name:"
        android:textSize="16sp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.17"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.301" />

    <EditText
        android:id="@+id/editTextText"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:inputType="text"
        android:hint="Roll"
        android:textSize="16sp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.691"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.216" />

    <EditText
        android:id="@+id/editTextText3"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:inputType="text"
        android:hint="Name"
        android:textSize="16sp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.691"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.293" />

    <TextView
        android:id="@+id/textViewResult"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_marginTop="24dp"
        android:textSize="16sp"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.498"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toBottomOf="@+id/button4" />

</androidx.constraintlayout.widget.ConstraintLayout>

*************************************************** DB Conn Main Activitu KT 1 -S *****************************

package com.example.studentdetaildb

import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat

class MainActivity : AppCompatActivity() {

    private lateinit var dbHelper: DBHelper
    private lateinit var editTextName: EditText
    private lateinit var editTextRoll: EditText
    private lateinit var editTextMarks: EditText
    private lateinit var buttonInsert: Button
    private lateinit var buttonViewAll: Button
    private lateinit var textViewResult: TextView
    private lateinit var buttonView: Button
    private lateinit var buttonDelete: Button
    private lateinit var buttonUpdate: Button

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets
        }
        dbHelper = DBHelper(this)
        editTextName = findViewById(R.id.editTextText3)
        editTextRoll = findViewById(R.id.editTextText)
        editTextMarks = findViewById(R.id.editTextText4)
        buttonInsert = findViewById(R.id.button5)
        buttonViewAll = findViewById(R.id.button4)
        buttonView = findViewById(R.id.button)
        buttonDelete = findViewById(R.id.button2)
        buttonUpdate = findViewById(R.id.button3)
        textViewResult = findViewById(R.id.textViewResult)
        buttonInsert.setOnClickListener {
            val name = editTextName.text.toString()
            val roll = editTextRoll.text.toString()
            val marks = editTextMarks.text.toString()
            dbHelper.insertStudent(name, roll, marks)

            editTextName.text.clear()
            editTextRoll.text.clear()
            editTextMarks.text.clear()
        }
        buttonViewAll.setOnClickListener {
            val students = dbHelper.getAllStudents()
            textViewResult.text =
                students.joinToString("\n") { "${it.name} - ${it.roll} - ${it.marks}" }
        }
        buttonView.setOnClickListener{
            val roll = editTextRoll.text.toString()
            val student = dbHelper.getStudent(roll)
            if (student != null) {
                textViewResult.text = "Name: ${student.name}, Roll: ${student.roll}, Marks: ${student.marks}"
            } else {
                textViewResult.text = "Student not found"
            }
            editTextRoll.text.clear()
        }
        buttonDelete.setOnClickListener {
            val roll = editTextRoll.text.toString()
            dbHelper.deleteStudent(roll)
            textViewResult.text = "Student with Roll No $roll deleted."
            editTextRoll.text.clear() // Clear the delete field after deletion
        }
        buttonUpdate.setOnClickListener {
            val roll = editTextRoll.text.toString()
            val name = editTextName.text.toString()
            val marks = editTextMarks.text.toString()
            dbHelper.updateStudent(roll, name, marks)
            // Clear update fields
            editTextRoll.text.clear()
            editTextName.text.clear()
            editTextMarks.text.clear()
            textViewResult.text = "Student with Roll No $roll updated."

        }
    }
}


********************************************* DB Conn - DB helper.kt -S ******************************************************
package com.example.studentdetaildb

import android.content.ContentValues
import android.content.Context
import android.database.Cursor
import android.database.sqlite.SQLiteDatabase
import android.database.sqlite.SQLiteOpenHelper

class DBHelper(context: Context) : SQLiteOpenHelper(context, DATABASE_NAME, null, DATABASE_VERSION) {

    companion object {
        private const val DATABASE_NAME = "student.db"
        private const val DATABASE_VERSION = 1
        private const val TABLE_NAME = "students"
        private const val COLUMN_ID = "id"
        private const val COLUMN_NAME = "name"
        private const val COLUMN_ROLL = "roll"
        private const val COLUMN_MARKS = "marks"

        private const val CREATE_TABLE = "CREATE TABLE $TABLE_NAME (" +
                "$COLUMN_ID INTEGER PRIMARY KEY AUTOINCREMENT, " +
                "$COLUMN_NAME TEXT, " +
                "$COLUMN_ROLL TEXT, " +
                "$COLUMN_MARKS TEXT)"
    }

    override fun onCreate(db: SQLiteDatabase) {
        db.execSQL(CREATE_TABLE)
    }

    override fun onUpgrade(db: SQLiteDatabase, oldVersion: Int, newVersion: Int) {
        db.execSQL("DROP TABLE IF EXISTS $TABLE_NAME")
        onCreate(db)
    }

    // Insert data
    fun insertStudent(name: String, roll: String, marks: String) {
        val db = this.writableDatabase
        val values = ContentValues().apply {
            put(COLUMN_NAME, name)
            put(COLUMN_ROLL, roll)
            put(COLUMN_MARKS, marks)
        }
        db.insert(TABLE_NAME, null, values)
        db.close()
    }


    // Update student details by roll number
    fun updateStudent(roll: String, name: String, marks: String) {
        val db = this.writableDatabase
        val values = ContentValues().apply {
            put(COLUMN_NAME, name)
            put(COLUMN_MARKS, marks)
        }
        db.update(TABLE_NAME, values, "$COLUMN_ROLL = ?", arrayOf(roll))
        db.close()
    }

    // Delete data
    fun deleteStudent(id: String) {
        val db = this.writableDatabase
        db.delete(TABLE_NAME, "$COLUMN_ROLL = ?", arrayOf(id))
        db.close()
    }

    // Retrieve all students
    fun getAllStudents(): List<Student> {
        val students = mutableListOf<Student>()
        val db = this.readableDatabase
        val cursor: Cursor = db.rawQuery("SELECT * FROM $TABLE_NAME", null)

        if (cursor.moveToFirst()) {
            do {
                val student = Student(
                    id = cursor.getInt(cursor.getColumnIndex(COLUMN_ID)),
                    name = cursor.getString(cursor.getColumnIndex(COLUMN_NAME)),
                    roll = cursor.getString(cursor.getColumnIndex(COLUMN_ROLL)),
                    marks = cursor.getString(cursor.getColumnIndex(COLUMN_MARKS))
                )
                students.add(student)
            } while (cursor.moveToNext())
        }
        cursor.close()
        db.close()
        return students
    }

    // Retrieve a student by roll number
    fun getStudent(roll: String): Student? {
        val db = this.readableDatabase
        val cursor: Cursor = db.query(
            TABLE_NAME,
            null,
            "$COLUMN_ROLL = ?",
            arrayOf(roll),
            null,
            null,
            null
        )
        var student: Student? = null
        if (cursor.moveToFirst()) {
            student = Student(
                id = cursor.getInt(cursor.getColumnIndex(COLUMN_ID)),
                name = cursor.getString(cursor.getColumnIndex(COLUMN_NAME)),
                roll = cursor.getString(cursor.getColumnIndex(COLUMN_ROLL)),
                marks = cursor.getString(cursor.getColumnIndex(COLUMN_MARKS))
            )
        }
        cursor.close()
        db.close()
        return student
    }

}

// Data class for Student
data class Student(
    val id: Int,
    val name: String,
    val roll: String,
    val marks: String
)

****************Toast  *************************

Toast.makeText(this, "Invalid captcha!", Toast.LENGTH_SHORT).show()


****************/DBHelper.kt - V *************************

package com.example.studentdetaildb

import android.content.ContentValues
import android.content.Context
import android.database.Cursor
import android.database.sqlite.SQLiteDatabase
import android.database.sqlite.SQLiteOpenHelper

class DBHelper(context: Context) : SQLiteOpenHelper(context, DATABASE_NAME, null, DATABASE_VERSION) {

    companion object {
        private const val DATABASE_NAME = "student.db"
        private const val DATABASE_VERSION = 1
        private const val TABLE_NAME = "students"
        private const val COLUMN_ID = "id"
        private const val COLUMN_NAME = "name"
        private const val COLUMN_ROLL = "roll"
        private const val COLUMN_MARKS = "marks"

        private const val CREATE_TABLE = "CREATE TABLE $TABLE_NAME (" +
                "$COLUMN_ID INTEGER PRIMARY KEY AUTOINCREMENT, " +
                "$COLUMN_NAME TEXT, " +
                "$COLUMN_ROLL TEXT, " +
                "$COLUMN_MARKS TEXT)"
    }

    override fun onCreate(db: SQLiteDatabase) {
        db.execSQL(CREATE_TABLE)
    }

    override fun onUpgrade(db: SQLiteDatabase, oldVersion: Int, newVersion: Int) {
        db.execSQL("DROP TABLE IF EXISTS $TABLE_NAME")
        onCreate(db)
    }

    // Insert data
    fun insertStudent(name: String, roll: String, marks: String) {
        val db = this.writableDatabase
        val values = ContentValues().apply {
            put(COLUMN_NAME, name)
            put(COLUMN_ROLL, roll)
            put(COLUMN_MARKS, marks)
        }
        db.insert(TABLE_NAME, null, values)
        db.close()
    }


    // Update student details by roll number
    fun updateStudent(roll: String, name: String, marks: String) {
        val db = this.writableDatabase
        val values = ContentValues().apply {
            put(COLUMN_NAME, name)
            put(COLUMN_MARKS, marks)
        }
        db.update(TABLE_NAME, values, "$COLUMN_ROLL = ?", arrayOf(roll))
        db.close()
    }

    // Delete data
    fun deleteStudent(id: String) {
        val db = this.writableDatabase
        db.delete(TABLE_NAME, "$COLUMN_ROLL = ?", arrayOf(id))
        db.close()
    }

    // Retrieve all students
    fun getAllStudents(): List<Student> {
        val students = mutableListOf<Student>()
        val db = this.readableDatabase
        val cursor: Cursor = db.rawQuery("SELECT * FROM $TABLE_NAME", null)

        if (cursor.moveToFirst()) {
            do {
                val student = Student(
                    id = cursor.getInt(cursor.getColumnIndex(COLUMN_ID)),
                    name = cursor.getString(cursor.getColumnIndex(COLUMN_NAME)),
                    roll = cursor.getString(cursor.getColumnIndex(COLUMN_ROLL)),
                    marks = cursor.getString(cursor.getColumnIndex(COLUMN_MARKS))
                )
                students.add(student)
            } while (cursor.moveToNext())
        }
        cursor.close()
        db.close()
        return students
    }

    // Retrieve a student by roll number
    fun getStudent(roll: String): Student? {
        val db = this.readableDatabase
        val cursor: Cursor = db.query(
            TABLE_NAME,
            null,
            "$COLUMN_ROLL = ?",
            arrayOf(roll),
            null,
            null,
            null
        )
        var student: Student? = null
        if (cursor.moveToFirst()) {
            student = Student(
                id = cursor.getInt(cursor.getColumnIndex(COLUMN_ID)),
                name = cursor.getString(cursor.getColumnIndex(COLUMN_NAME)),
                roll = cursor.getString(cursor.getColumnIndex(COLUMN_ROLL)),
                marks = cursor.getString(cursor.getColumnIndex(COLUMN_MARKS))
            )
        }
        cursor.close()
        db.close()
        return student
    }

}

// Data class for Student
data class Student(
    val id: Int,
    val name: String,
    val roll: String,
    val marks: String
)


***************/MainActivity.kt - V **************************************

package com.example.studentdetaildb

import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat

class MainActivity : AppCompatActivity() {

    private lateinit var dbHelper: DBHelper
    private lateinit var editTextName: EditText
    private lateinit var editTextRoll: EditText
    private lateinit var editTextMarks: EditText
    private lateinit var buttonInsert: Button
    private lateinit var buttonViewAll: Button
    private lateinit var textViewResult: TextView
    private lateinit var buttonView: Button
    private lateinit var buttonDelete: Button
    private lateinit var buttonUpdate: Button

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets
        }
        getDrawable()
        dbHelper = DBHelper(this)
        editTextName = findViewById(R.id.editTextText3)
        editTextRoll = findViewById(R.id.editTextText)
        editTextMarks = findViewById(R.id.editTextText4)
        buttonInsert = findViewById(R.id.button5)
        buttonViewAll = findViewById(R.id.button4)
        buttonView = findViewById(R.id.button)
        buttonDelete = findViewById(R.id.button2)
        buttonUpdate = findViewById(R.id.button3)
        textViewResult = findViewById(R.id.textViewResult)
        buttonInsert.setOnClickListener {
            val name = editTextName.text.toString()
            val roll = editTextRoll.text.toString()
            val marks = editTextMarks.text.toString()
            dbHelper.insertStudent(name, roll, marks)

            editTextName.text.clear()
            editTextRoll.text.clear()
            editTextMarks.text.clear()
        }
        buttonViewAll.setOnClickListener {
            val students = dbHelper.getAllStudents()
            textViewResult.text =
                students.joinToString("\n") { "${it.name} - ${it.roll} - ${it.marks}" }
        }
        buttonView.setOnClickListener{
            val roll = editTextRoll.text.toString()
            val student = dbHelper.getStudent(roll)
            if (student != null) {
                textViewResult.text = "Name: ${student.name}, Roll: ${student.roll}, Marks: ${student.marks}"
            } else {
                textViewResult.text = "Student not found"
            }
            editTextRoll.text.clear()
        }
        buttonDelete.setOnClickListener {
            val roll = editTextRoll.text.toString()
            dbHelper.deleteStudent(roll)
            textViewResult.text = "Student with Roll No $roll deleted."
            editTextRoll.text.clear() // Clear the delete field after deletion
        }
        buttonUpdate.setOnClickListener {
            val roll = editTextRoll.text.toString()
            val name = editTextName.text.toString()
            val marks = editTextMarks.text.toString()
            dbHelper.updateStudent(roll, name, marks)
            // Clear update fields
            editTextRoll.text.clear()
            editTextName.text.clear()
            editTextMarks.text.clear()
            textViewResult.text = "Student with Roll No $roll updated."

        }
    }
}

*****MainActiviy.kt  MENUBAR ****


package com.example.menudrag

import android.graphics.Color
import android.os.Bundle
import android.view.Menu
import android.view.MenuItem
import android.view.View
import android.widget.Button
import android.widget.PopupMenu
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.Toolbar
import kotlin.random.Random

class MainActivity : AppCompatActivity() {

    private lateinit var formatButton: Button
    private lateinit var textView: TextView

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // Initialize the Toolbar and set it as the ActionBar
        val toolbar: Toolbar = findViewById(R.id.toolbar)
        setSupportActionBar(toolbar)

        // Initialize views
        formatButton = findViewById(R.id.formatButton)
        textView = findViewById(R.id.textView)

        // Set click listener for the format button to show the popup menu
        formatButton.setOnClickListener { showPopupMenu(it) }
    }

    private fun showPopupMenu(view: View) {
        val popupMenu = PopupMenu(this, view)
        popupMenu.menuInflater.inflate(R.menu.popup_menu, popupMenu.menu)

        popupMenu.setOnMenuItemClickListener { item: MenuItem ->
            when (item.itemId) {
                R.id.small -> changeTextSize(R.dimen.text_size_small)
                R.id.medium -> changeTextSize(R.dimen.text_size_medium)
                R.id.large -> changeTextSize(R.dimen.text_size_large)
                R.id.change_color -> changeTextColor()
            }
            true
        }
        popupMenu.show()
    }

    private fun changeTextSize(sizeId: Int) {
        val size = resources.getDimension(sizeId)
        textView.textSize = size / resources.displayMetrics.scaledDensity // Convert to sp
    }

    private fun changeTextColor() {
        val randomColor = Color.rgb(Random.nextInt(256), Random.nextInt(256), Random.nextInt(256))
        textView.setTextColor(randomColor)
    }

    override fun onCreateOptionsMenu(menu: Menu): Boolean {
        menuInflater.inflate(R.menu.options_menu, menu)
        return true
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        return when (item.itemId) {
            R.id.color_red -> {
                findViewById<View>(android.R.id.content).setBackgroundColor(resources.getColor(R.color.red))
                true
            }
            R.id.color_green -> {
                findViewById<View>(android.R.id.content).setBackgroundColor(resources.getColor(R.color.green))
                true
            }
            R.id.color_blue -> {
                findViewById<View>(android.R.id.content).setBackgroundColor(resources.getColor(R.color.blue))
                true
            }
            else -> super.onOptionsItemSelected(item)
        }
    }
}

******Rating Bar - dynamic text view - linear layout *******

ratingBar = findViewById(R.id.ratingBar)
        messageEditText = findViewById(R.id.messageEditText)
        sendButton = findViewById(R.id.sendButton)
        feedbackContainer = findViewById(R.id.feedbackContainer) // LinearLayout to hold dynamic TextViews

        // Set up RatingBar listener to create a new TextView for each rating
        ratingBar.onRatingBarChangeListener = RatingBar.OnRatingBarChangeListener { _, rating, _ ->
            val message = when (rating.toInt()) {
                5 -> "Awesome. I love it"
                4 -> "Good. Enjoyed it"
                3 -> "Satisfied."
                2 -> "Not good. Need improvement"
                1 -> "Disappointed. Very poor"
                else -> ""
            }
            createFeedbackTextView(message) // Create and add TextView for the rating message

            // Clear previous input and focus on input field
            messageEditText.text.clear()
            messageEditText.requestFocus()
        }

        // Set up send button listener
        sendButton.setOnClickListener {
            val feedbackMessage = messageEditText.text.toString()
            val intent2 = Intent(Intent.ACTION_VIEW)
            intent2.setData(Uri.parse("https://www.psgtech.edu"))
            startActivity(intent2)
//            val intent = Intent(this, MainActivity2::class.java)
//            intent.putExtra("feedback",feedbackMessage)
//            startActivity(intent)

        }
    }

    private fun createFeedbackTextView(message: String) {
        var checkVal = findViewById<TextView>(R.id.dynamic_text_view_id)
        if(checkVal==null){
            val textView = TextView(this).apply {
                id = R.id.dynamic_text_view_id
                text = message
                textSize = 16f // Set text size, adjust as needed
                setPadding(16, 16, 16, 16) // Add padding for better appearance
            }

            // Find the index of the RatingBar in the feedbackContainer
            val ratingBarIndex = feedbackContainer.indexOfChild(findViewById<RatingBar>(R.id.ratingBar))

            // Insert the new TextView after the RatingBar
            feedbackContainer.addView(textView, ratingBarIndex + 1)
        }
        else{

            if (checkVal != null) {
                if (message==""){
                    feedbackContainer.removeView(checkVal)
                }
                else{
                    checkVal.text = message
                }

            }
        }
****************/DBHelper.kt - V DB*************************

package com.example.studentdetaildb

import android.content.ContentValues
import android.content.Context
import android.database.Cursor
import android.database.sqlite.SQLiteDatabase
import android.database.sqlite.SQLiteOpenHelper

class DBHelper(context: Context) : SQLiteOpenHelper(context, DATABASE_NAME, null, DATABASE_VERSION) {

    companion object {
        private const val DATABASE_NAME = "student.db"
        private const val DATABASE_VERSION = 1
        private const val TABLE_NAME = "students"
        private const val COLUMN_ID = "id"
        private const val COLUMN_NAME = "name"
        private const val COLUMN_ROLL = "roll"
        private const val COLUMN_MARKS = "marks"

        private const val CREATE_TABLE = "CREATE TABLE $TABLE_NAME (" +
                "$COLUMN_ID INTEGER PRIMARY KEY AUTOINCREMENT, " +
                "$COLUMN_NAME TEXT, " +
                "$COLUMN_ROLL TEXT, " +
                "$COLUMN_MARKS TEXT)"
    }

    override fun onCreate(db: SQLiteDatabase) {
        db.execSQL(CREATE_TABLE)
    }

    override fun onUpgrade(db: SQLiteDatabase, oldVersion: Int, newVersion: Int) {
        db.execSQL("DROP TABLE IF EXISTS $TABLE_NAME")
        onCreate(db)
    }

    // Insert data
    fun insertStudent(name: String, roll: String, marks: String) {
        val db = this.writableDatabase
        val values = ContentValues().apply {
            put(COLUMN_NAME, name)
            put(COLUMN_ROLL, roll)
            put(COLUMN_MARKS, marks)
        }
        db.insert(TABLE_NAME, null, values)
        db.close()
    }


    // Update student details by roll number
    fun updateStudent(roll: String, name: String, marks: String) {
        val db = this.writableDatabase
        val values = ContentValues().apply {
            put(COLUMN_NAME, name)
            put(COLUMN_MARKS, marks)
        }
        db.update(TABLE_NAME, values, "$COLUMN_ROLL = ?", arrayOf(roll))
        db.close()
    }

    // Delete data
    fun deleteStudent(id: String) {
        val db = this.writableDatabase
        db.delete(TABLE_NAME, "$COLUMN_ROLL = ?", arrayOf(id))
        db.close()
    }

    // Retrieve all students
    fun getAllStudents(): List<Student> {
        val students = mutableListOf<Student>()
        val db = this.readableDatabase
        val cursor: Cursor = db.rawQuery("SELECT * FROM $TABLE_NAME", null)

        if (cursor.moveToFirst()) {
            do {
                val student = Student(
                    id = cursor.getInt(cursor.getColumnIndex(COLUMN_ID)),
                    name = cursor.getString(cursor.getColumnIndex(COLUMN_NAME)),
                    roll = cursor.getString(cursor.getColumnIndex(COLUMN_ROLL)),
                    marks = cursor.getString(cursor.getColumnIndex(COLUMN_MARKS))
                )
                students.add(student)
            } while (cursor.moveToNext())
        }
        cursor.close()
        db.close()
        return students
    }

    // Retrieve a student by roll number
    fun getStudent(roll: String): Student? {
        val db = this.readableDatabase
        val cursor: Cursor = db.query(
            TABLE_NAME,
            null,
            "$COLUMN_ROLL = ?",
            arrayOf(roll),
            null,
            null,
            null
        )
        var student: Student? = null
        if (cursor.moveToFirst()) {
            student = Student(
                id = cursor.getInt(cursor.getColumnIndex(COLUMN_ID)),
                name = cursor.getString(cursor.getColumnIndex(COLUMN_NAME)),
                roll = cursor.getString(cursor.getColumnIndex(COLUMN_ROLL)),
                marks = cursor.getString(cursor.getColumnIndex(COLUMN_MARKS))
            )
        }
        cursor.close()
        db.close()
        return student
    }

}

// Data class for Student
data class Student(
    val id: Int,
    val name: String,
    val roll: String,
    val marks: String
)


***************/MainActivity.kt - V DB **************************************

package com.example.studentdetaildb

import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat

class MainActivity : AppCompatActivity() {

    private lateinit var dbHelper: DBHelper
    private lateinit var editTextName: EditText
    private lateinit var editTextRoll: EditText
    private lateinit var editTextMarks: EditText
    private lateinit var buttonInsert: Button
    private lateinit var buttonViewAll: Button
    private lateinit var textViewResult: TextView
    private lateinit var buttonView: Button
    private lateinit var buttonDelete: Button
    private lateinit var buttonUpdate: Button

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets
        }
        getDrawable()
        dbHelper = DBHelper(this)
        editTextName = findViewById(R.id.editTextText3)
        editTextRoll = findViewById(R.id.editTextText)
        editTextMarks = findViewById(R.id.editTextText4)
        buttonInsert = findViewById(R.id.button5)
        buttonViewAll = findViewById(R.id.button4)
        buttonView = findViewById(R.id.button)
        buttonDelete = findViewById(R.id.button2)
        buttonUpdate = findViewById(R.id.button3)
        textViewResult = findViewById(R.id.textViewResult)
        buttonInsert.setOnClickListener {
            val name = editTextName.text.toString()
            val roll = editTextRoll.text.toString()
            val marks = editTextMarks.text.toString()
            dbHelper.insertStudent(name, roll, marks)

            editTextName.text.clear()
            editTextRoll.text.clear()
            editTextMarks.text.clear()
        }
        buttonViewAll.setOnClickListener {
            val students = dbHelper.getAllStudents()
            textViewResult.text =
                students.joinToString("\n") { "${it.name} - ${it.roll} - ${it.marks}" }
        }
        buttonView.setOnClickListener{
            val roll = editTextRoll.text.toString()
            val student = dbHelper.getStudent(roll)
            if (student != null) {
                textViewResult.text = "Name: ${student.name}, Roll: ${student.roll}, Marks: ${student.marks}"
            } else {
                textViewResult.text = "Student not found"
            }
            editTextRoll.text.clear()
        }
        buttonDelete.setOnClickListener {
            val roll = editTextRoll.text.toString()
            dbHelper.deleteStudent(roll)
            textViewResult.text = "Student with Roll No $roll deleted."
            editTextRoll.text.clear() // Clear the delete field after deletion
        }
        buttonUpdate.setOnClickListener {
            val roll = editTextRoll.text.toString()
            val name = editTextName.text.toString()
            val marks = editTextMarks.text.toString()
            dbHelper.updateStudent(roll, name, marks)
            // Clear update fields
            editTextRoll.text.clear()
            editTextName.text.clear()
            editTextMarks.text.clear()
            textViewResult.text = "Student with Roll No $roll updated."

        }
    }
}

*****MainActiviy.kt  MENUBAR ****


package com.example.menudrag

import android.graphics.Color
import android.os.Bundle
import android.view.Menu
import android.view.MenuItem
import android.view.View
import android.widget.Button
import android.widget.PopupMenu
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.Toolbar
import kotlin.random.Random

class MainActivity : AppCompatActivity() {

    private lateinit var formatButton: Button
    private lateinit var textView: TextView

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // Initialize the Toolbar and set it as the ActionBar
        val toolbar: Toolbar = findViewById(R.id.toolbar)
        setSupportActionBar(toolbar)

        // Initialize views
        formatButton = findViewById(R.id.formatButton)
        textView = findViewById(R.id.textView)

        // Set click listener for the format button to show the popup menu
        formatButton.setOnClickListener { showPopupMenu(it) }
    }

    private fun showPopupMenu(view: View) {
        val popupMenu = PopupMenu(this, view)
        popupMenu.menuInflater.inflate(R.menu.popup_menu, popupMenu.menu)

        popupMenu.setOnMenuItemClickListener { item: MenuItem ->
            when (item.itemId) {
                R.id.small -> changeTextSize(R.dimen.text_size_small)
                R.id.medium -> changeTextSize(R.dimen.text_size_medium)
                R.id.large -> changeTextSize(R.dimen.text_size_large)
                R.id.change_color -> changeTextColor()
            }
            true
        }
        popupMenu.show()
    }

    private fun changeTextSize(sizeId: Int) {
        val size = resources.getDimension(sizeId)
        textView.textSize = size / resources.displayMetrics.scaledDensity // Convert to sp
    }

    private fun changeTextColor() {
        val randomColor = Color.rgb(Random.nextInt(256), Random.nextInt(256), Random.nextInt(256))
        textView.setTextColor(randomColor)
    }

    override fun onCreateOptionsMenu(menu: Menu): Boolean {
        menuInflater.inflate(R.menu.options_menu, menu)
        return true
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        return when (item.itemId) {
            R.id.color_red -> {
                findViewById<View>(android.R.id.content).setBackgroundColor(resources.getColor(R.color.red))
                true
            }
            R.id.color_green -> {
                findViewById<View>(android.R.id.content).setBackgroundColor(resources.getColor(R.color.green))
                true
            }
            R.id.color_blue -> {
                findViewById<View>(android.R.id.content).setBackgroundColor(resources.getColor(R.color.blue))
                true
            }
            else -> super.onOptionsItemSelected(item)
        }
    }
}

******Rating Bar - dynamic text view - linear layout ***************************************

ratingBar = findViewById(R.id.ratingBar)
        messageEditText = findViewById(R.id.messageEditText)
        sendButton = findViewById(R.id.sendButton)
        feedbackContainer = findViewById(R.id.feedbackContainer) // LinearLayout to hold dynamic TextViews

        // Set up RatingBar listener to create a new TextView for each rating
        ratingBar.onRatingBarChangeListener = RatingBar.OnRatingBarChangeListener { _, rating, _ ->
            val message = when (rating.toInt()) {
                5 -> "Awesome. I love it"
                4 -> "Good. Enjoyed it"
                3 -> "Satisfied."
                2 -> "Not good. Need improvement"
                1 -> "Disappointed. Very poor"
                else -> ""
            }
            createFeedbackTextView(message) // Create and add TextView for the rating message

            // Clear previous input and focus on input field
            messageEditText.text.clear()
            messageEditText.requestFocus()
        }

        // Set up send button listener
        sendButton.setOnClickListener {
            val feedbackMessage = messageEditText.text.toString()
            val intent2 = Intent(Intent.ACTION_VIEW)
            intent2.setData(Uri.parse("https://www.psgtech.edu"))
            startActivity(intent2)
//            val intent = Intent(this, MainActivity2::class.java)
//            intent.putExtra("feedback",feedbackMessage)
//            startActivity(intent)

        }
    }

    private fun createFeedbackTextView(message: String) {
        var checkVal = findViewById<TextView>(R.id.dynamic_text_view_id)
        if(checkVal==null){
            val textView = TextView(this).apply {
                id = R.id.dynamic_text_view_id
                text = message
                textSize = 16f // Set text size, adjust as needed
                setPadding(16, 16, 16, 16) // Add padding for better appearance
            }

            // Find the index of the RatingBar in the feedbackContainer
            val ratingBarIndex = feedbackContainer.indexOfChild(findViewById<RatingBar>(R.id.ratingBar))

            // Insert the new TextView after the RatingBar
            feedbackContainer.addView(textView, ratingBarIndex + 1)
        }
        else{

            if (checkVal != null) {
                if (message==""){
                    feedbackContainer.removeView(checkVal)
                }
                else{
                    checkVal.text = message
                }

            }
        }


*****************Intent, Share preference, Toast , Spinner , Array Adapter ******************************************************************

val gender = resources.getStringArray(R.array.Gender)
        val spinner = findViewById<Spinner>(R.id.spinner)
        if (spinner != null) {
            val adapter = ArrayAdapter(
                this,
                android.R.layout.simple_spinner_item, gender
            )
            spinner.adapter
        }
        var fname = findViewById<EditText>(R.id.editTextText) as EditText
        var lname = findViewById<EditText>(R.id.editTextText3) as EditText
        var pnum = findViewById<EditText>(R.id.editTextPhone) as EditText
        var maill = findViewById<EditText>(R.id.editTextTextEmailAddress) as EditText
        var bdate = findViewById<EditText>(R.id.editTextDate) as EditText
        var address = findViewById<EditText>(R.id.editTextTextPostalAddress) as EditText
        var save = findViewById<Button>(R.id.button) as Button
        var sh = getSharedPreferences("MySharedPref", MODE_PRIVATE)

        save.setOnClickListener {
            // Get user input from EditTexts
            val firstName = fname.text.toString()
            val lastName = lname.text.toString()
            val phoneNumber = pnum.text.toString()
            val email = maill.text.toString()
            val birthDate = bdate.text.toString()
            val userAddress = address.text.toString()
            val selectedGender = spinner.selectedItem.toString()

            // Save data to SharedPreferences
            with(sh.edit()) {
                putString("firstName", firstName)
                putString("lastName", lastName)
                putString("phoneNumber", phoneNumber)
                putString("email", email)
                putString("birthDate", birthDate)
                putString("address", userAddress)
                putString("gender", selectedGender)
                apply() // or commit() if you want to block until it's saved
            }

            // Create an Intent to start MainActivity2
            val v1 = Intent(this, MainActivity2::class.java)
            v1.putExtra("firstName", firstName)
            v1.putExtra("lastName", lastName)
            v1.putExtra("phoneNumber", phoneNumber)
            v1.putExtra("email", email)
            v1.putExtra("birthDate", birthDate)
            v1.putExtra("address", userAddress)
            v1.putExtra("gender", selectedGender)

            Toast.makeText(this, "Details saved and passed successfully!", Toast.LENGTH_SHORT).show()

            // Start MainActivity2 with the intent
            startActivity(v1)

*************Use intent ******************************************
  val firstName = intent.getStringExtra("firstName")
  val lastName = intent.getStringExtra("lastName")
  val phoneNumber = intent.getStringExtra("phoneNumber")
  val email = intent.getStringExtra("email")


********** Use Shared preference ************************************** 
val sharedPreferences = getSharedPreferences("MySharedPref", MODE_PRIVATE)

 // Retrieve user details from SharedPreferences
 val firstName = sharedPreferences.getString("firstName", "Default First Name")
 val lastName = sharedPreferences.getString("lastName", "Default Last Name")
 val phoneNumber = sharedPreferences.getString("phoneNumber", "Default Phone Number")






