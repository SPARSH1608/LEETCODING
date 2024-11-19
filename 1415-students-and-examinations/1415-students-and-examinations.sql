SELECT S.student_id ,
    S.student_name,
    Sub.subject_name,
    Count(E.student_id) attended_exams
from Students S
CROSS JOIN Subjects Sub
LEFT JOIN Examinations E
on E.student_id=S.student_id 
    and Sub.subject_name=E.subject_name
GROUP BY  S.student_id, Sub.subject_name
ORDER BY S.student_id , Sub.subject_name

