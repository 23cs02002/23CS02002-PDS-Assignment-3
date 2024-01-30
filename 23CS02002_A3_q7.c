#include <stdio.h>

int main()
{
    int num_classes_attended, num_total_classes;
    float marks_obtained, final_score;
    printf("Enter the marks obtained, number of classes attended and total number of classes conducted.\n");
    scanf("%f %d %d", &marks_obtained, &num_classes_attended, &num_total_classes);

    final_score = (marks_obtained * num_classes_attended) / num_total_classes;

    if (final_score >= 90)
        printf("Final score = %.2f\nGrade = EX", final_score);

    else if (final_score >= 80 && final_score < 90)
        printf("Final score = %.2f\nGrade = A", final_score);

    else if (final_score >= 70 && final_score < 80)
        printf("Final score = %.2f\nGrade = B", final_score);

    else if (final_score >= 60 && final_score < 70)
        printf("Final score = %.2f\nGrade = C", final_score);

    else if (final_score >= 50 && final_score < 60)
        printf("Final score = %.2f\nGrade = D", final_score);

    else if (final_score >= 40 && final_score < 50)
        printf("Final score = %.2f\nGrade = P", final_score);

    else printf("Final score = %.2f\nGrade = F", final_score);

    return 0;
}